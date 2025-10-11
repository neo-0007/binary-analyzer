
int HMAC_Final(HMAC_CTX *ctx,uchar *md,uint *len)

{
  int iVar1;
  uint uVar2;
  long in_FS_OFFSET;
  uint local_7c;
  uchar local_78 [72];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar2 = 0;
  if (ctx->md != (EVP_MD *)0x0) {
    iVar1 = EVP_DigestFinal_ex((EVP_MD_CTX *)(ctx->md_ctx).digest,local_78,&local_7c);
    if (iVar1 != 0) {
      iVar1 = EVP_MD_CTX_copy_ex((EVP_MD_CTX *)(ctx->md_ctx).digest,
                                 (EVP_MD_CTX *)(ctx->md_ctx).flags);
      if (iVar1 != 0) {
        iVar1 = EVP_DigestUpdate((EVP_MD_CTX *)(ctx->md_ctx).digest,local_78,(ulong)local_7c);
        if (iVar1 != 0) {
          iVar1 = EVP_DigestFinal_ex((EVP_MD_CTX *)(ctx->md_ctx).digest,md,len);
          uVar2 = (uint)(iVar1 != 0);
          goto LAB_00537519;
        }
      }
    }
    uVar2 = 0;
  }
LAB_00537519:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

