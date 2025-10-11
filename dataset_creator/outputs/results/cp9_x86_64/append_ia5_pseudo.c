
undefined4 append_ia5(long *param_1,int *param_2)

{
  int iVar1;
  void *pvVar2;
  void *pvVar3;
  long lVar4;
  size_t __n;
  
  if (param_2[1] != 0x16) {
    return 1;
  }
  pvVar3 = *(void **)(param_2 + 2);
  if ((pvVar3 != (void *)0x0) && (*param_2 != 0)) {
    __n = (size_t)*param_2;
    pvVar2 = memchr(pvVar3,0,__n);
    if (pvVar2 == (void *)0x0) {
      if (*param_1 == 0) {
        lVar4 = OPENSSL_sk_new(sk_strcmp);
        *param_1 = lVar4;
        if (lVar4 == 0) {
          return 0;
        }
        __n = (size_t)*param_2;
        pvVar3 = *(void **)(param_2 + 2);
      }
      pvVar3 = (void *)CRYPTO_strndup(pvVar3,__n,"../crypto/x509/v3_utl.c",0x21d);
      if (pvVar3 == (void *)0x0) {
        X509_email_free((stack_st_OPENSSL_STRING *)*param_1);
        *param_1 = 0;
        return 0;
      }
      iVar1 = OPENSSL_sk_find(*param_1,pvVar3);
      if (iVar1 == -1) {
        iVar1 = OPENSSL_sk_push(*param_1,pvVar3);
        if (iVar1 == 0) {
          CRYPTO_free(pvVar3);
          X509_email_free((stack_st_OPENSSL_STRING *)*param_1);
          *param_1 = 0;
          return 0;
        }
      }
      else {
        CRYPTO_free(pvVar3);
      }
    }
  }
  return 1;
}

