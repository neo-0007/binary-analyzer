
ulong X509_NAME_hash_old(X509_NAME *x)

{
  int iVar1;
  EVP_MD *type;
  EVP_MD_CTX *ctx;
  ulong uVar2;
  long in_FS_OFFSET;
  uint local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  type = (EVP_MD *)EVP_MD_fetch(0,&DAT_007c5ccc,&DAT_007c470a);
  ctx = (EVP_MD_CTX *)EVP_MD_CTX_new();
  if ((type != (EVP_MD *)0x0) && (ctx != (EVP_MD_CTX *)0x0)) {
    i2d_X509_NAME(x,(uchar **)0x0);
    iVar1 = EVP_DigestInit_ex(ctx,type,(ENGINE *)0x0);
    if (iVar1 != 0) {
      iVar1 = EVP_DigestUpdate(ctx,x->bytes->data,x->bytes->length);
      if (iVar1 != 0) {
        iVar1 = EVP_DigestFinal_ex(ctx,(uchar *)local_48,(uint *)0x0);
        if (iVar1 != 0) {
          uVar2 = (ulong)local_48[0];
          goto LAB_0058bcc9;
        }
      }
    }
  }
  uVar2 = 0;
LAB_0058bcc9:
  EVP_MD_CTX_free(ctx);
  EVP_MD_free(type);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

