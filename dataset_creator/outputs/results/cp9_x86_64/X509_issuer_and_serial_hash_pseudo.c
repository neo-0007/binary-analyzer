
ulong X509_issuer_and_serial_hash(X509 *a)

{
  int iVar1;
  EVP_MD_CTX *ctx;
  char *__s;
  EVP_MD *type;
  size_t cnt;
  ulong uVar2;
  long in_FS_OFFSET;
  uint local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  ctx = (EVP_MD_CTX *)EVP_MD_CTX_new();
  if (ctx != (EVP_MD_CTX *)0x0) {
    __s = X509_NAME_oneline(*(X509_NAME **)&(a->ex_data).dummy,(char *)0x0,0);
    if (__s != (char *)0x0) {
      type = (EVP_MD *)
             EVP_MD_fetch(*(undefined8 *)a[1].sha1_hash,&DAT_007c5ccc,
                          *(undefined8 *)(a[1].sha1_hash + 8));
      if (type != (EVP_MD *)0x0) {
        uVar2 = 0;
        iVar1 = EVP_DigestInit_ex(ctx,type,(ENGINE *)0x0);
        if (iVar1 != 0) {
          cnt = strlen(__s);
          iVar1 = EVP_DigestUpdate(ctx,__s,cnt);
          if (iVar1 != 0) {
            CRYPTO_free(__s);
            iVar1 = EVP_DigestUpdate(ctx,a->signature,(long)*(int *)&a->sig_alg);
            if (iVar1 != 0) {
              iVar1 = EVP_DigestFinal_ex(ctx,(uchar *)local_48,(uint *)0x0);
              uVar2 = 0;
              if (iVar1 != 0) {
                uVar2 = (ulong)local_48[0];
              }
            }
          }
        }
        goto LAB_0058b526;
      }
    }
  }
  type = (EVP_MD *)0x0;
  uVar2 = 0;
LAB_0058b526:
  EVP_MD_free(type);
  EVP_MD_CTX_free(ctx);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

