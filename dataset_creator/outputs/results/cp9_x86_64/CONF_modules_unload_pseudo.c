
void CONF_modules_unload(int all)

{
  int iVar1;
  long *ptr;
  bool bVar2;
  
  CONF_modules_finish();
  iVar1 = OPENSSL_sk_num(supported_modules);
  iVar1 = iVar1 + -1;
  if (-1 < iVar1) {
    do {
      ptr = (long *)OPENSSL_sk_value(supported_modules,iVar1);
      if ((((int)ptr[4] < 1) && (*ptr != 0)) || (all != 0)) {
        OPENSSL_sk_delete(supported_modules,iVar1);
        DSO_free((DSO *)*ptr);
        CRYPTO_free((void *)ptr[1]);
        CRYPTO_free(ptr);
      }
      bVar2 = iVar1 != 0;
      iVar1 = iVar1 + -1;
    } while (bVar2);
  }
  iVar1 = OPENSSL_sk_num(supported_modules);
  if (iVar1 == 0) {
    OPENSSL_sk_free(supported_modules);
    supported_modules = 0;
    return;
  }
  return;
}

