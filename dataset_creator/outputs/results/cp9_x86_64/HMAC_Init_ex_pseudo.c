
int HMAC_Init_ex(HMAC_CTX *ctx,void *key,int len,EVP_MD *md,ENGINE *impl)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  EVP_MD *type;
  long in_FS_OFFSET;
  uint local_16c;
  byte local_168 [144];
  byte local_d8 [152];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  type = ctx->md;
  if (md == (EVP_MD *)0x0) {
    if (type != (EVP_MD *)0x0) goto LAB_0053727d;
  }
  else if ((type == md) || ((key != (void *)0x0 && (-1 < len)))) {
    ctx->md = md;
    type = md;
LAB_0053727d:
    uVar1 = EVP_MD_get_flags(type);
    uVar4 = (ulong)(uVar1 & 2);
    if ((uVar1 & 2) == 0) {
      if (key == (void *)0x0) {
        iVar2 = EVP_MD_CTX_copy_ex((EVP_MD_CTX *)(ctx->md_ctx).digest,
                                   (EVP_MD_CTX *)(ctx->md_ctx).engine);
        uVar1 = (uint)(iVar2 != 0);
        goto LAB_005372a7;
      }
      uVar1 = EVP_MD_get_block_size(type);
      if (uVar1 < 0x91) {
        if ((int)uVar1 < len) {
          iVar2 = EVP_DigestInit_ex((EVP_MD_CTX *)(ctx->md_ctx).digest,type,impl);
          if (((iVar2 != 0) &&
              (iVar2 = EVP_DigestUpdate((EVP_MD_CTX *)(ctx->md_ctx).digest,key,(long)len),
              iVar2 != 0)) &&
             (iVar2 = EVP_DigestFinal_ex((EVP_MD_CTX *)(ctx->md_ctx).digest,local_d8,&local_16c),
             iVar2 != 0)) goto LAB_00537319;
        }
        else if ((uint)len < 0x91) {
          __memcpy_chk(local_d8,key,(long)len,0x90);
          local_16c = len;
LAB_00537319:
          if (local_16c != 0x90) {
            memset(local_d8 + local_16c,0,(ulong)(0x90 - local_16c));
          }
          lVar3 = 0;
          do {
            local_168[lVar3] = local_d8[lVar3] ^ 0x36;
            lVar3 = lVar3 + 1;
          } while (lVar3 != 0x90);
          iVar2 = EVP_DigestInit_ex((EVP_MD_CTX *)(ctx->md_ctx).engine,type,impl);
          if (iVar2 == 0) {
LAB_0053735f:
            uVar1 = 0;
          }
          else {
            iVar2 = EVP_MD_get_block_size(type);
            iVar2 = EVP_DigestUpdate((EVP_MD_CTX *)(ctx->md_ctx).engine,local_168,(long)iVar2);
            if (iVar2 == 0) goto LAB_0053735f;
            do {
              local_168[uVar4] = local_d8[uVar4] ^ 0x5c;
              uVar4 = uVar4 + 1;
            } while (uVar4 != 0x90);
            iVar2 = EVP_DigestInit_ex((EVP_MD_CTX *)(ctx->md_ctx).flags,type,impl);
            if (iVar2 == 0) goto LAB_0053735f;
            iVar2 = EVP_MD_get_block_size(type);
            iVar2 = EVP_DigestUpdate((EVP_MD_CTX *)(ctx->md_ctx).flags,local_168,(long)iVar2);
            if (iVar2 == 0) goto LAB_0053735f;
            iVar2 = EVP_MD_CTX_copy_ex((EVP_MD_CTX *)(ctx->md_ctx).digest,
                                       (EVP_MD_CTX *)(ctx->md_ctx).engine);
            uVar1 = (uint)(iVar2 != 0);
          }
          OPENSSL_cleanse(local_d8,0x90);
          OPENSSL_cleanse(local_168,0x90);
          goto LAB_005372a7;
        }
      }
    }
  }
  uVar1 = 0;
LAB_005372a7:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return uVar1;
}

