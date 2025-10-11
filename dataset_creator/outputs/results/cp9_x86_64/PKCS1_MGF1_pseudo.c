
int PKCS1_MGF1(uchar *mask,long len,uchar *seed,long seedlen,EVP_MD *dgst)

{
  long lVar1;
  int iVar2;
  int iVar3;
  EVP_MD_CTX *ctx;
  uint uVar4;
  long lVar5;
  uchar *md;
  long in_FS_OFFSET;
  uint local_8c;
  uchar local_88 [72];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  ctx = (EVP_MD_CTX *)EVP_MD_CTX_new();
  if ((ctx == (EVP_MD_CTX *)0x0) || (iVar2 = EVP_MD_get_size(dgst), iVar2 < 0)) {
LAB_00558c9d:
    iVar2 = -1;
  }
  else {
    if (0 < len) {
      uVar4 = 0;
      lVar5 = 0;
      md = mask;
      do {
        local_8c = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
        iVar3 = EVP_DigestInit_ex(ctx,dgst,(ENGINE *)0x0);
        if (((iVar3 == 0) || (iVar3 = EVP_DigestUpdate(ctx,seed,seedlen), iVar3 == 0)) ||
           (iVar3 = EVP_DigestUpdate(ctx,&local_8c,4), iVar3 == 0)) goto LAB_00558c9d;
        lVar1 = iVar2 + lVar5;
        if (len < lVar1) {
          iVar2 = EVP_DigestFinal_ex(ctx,local_88,(uint *)0x0);
          if (iVar2 == 0) goto LAB_00558c9d;
          iVar2 = 0;
          memcpy(mask + lVar5,local_88,len - lVar5);
          goto LAB_00558c58;
        }
        iVar3 = EVP_DigestFinal_ex(ctx,md,(uint *)0x0);
        if (iVar3 == 0) goto LAB_00558c9d;
        uVar4 = uVar4 + 1;
        md = md + iVar2;
        lVar5 = lVar1;
      } while (lVar1 < len);
    }
    iVar2 = 0;
  }
LAB_00558c58:
  OPENSSL_cleanse(local_88,0x40);
  EVP_MD_CTX_free(ctx);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return iVar2;
}

