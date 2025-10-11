
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void CONF_modules_finish(void)

{
  int iVar1;
  long *ptr;
  long lVar2;
  
  while( true ) {
    iVar1 = OPENSSL_sk_num(initialized_modules);
    if (iVar1 < 1) break;
    ptr = (long *)OPENSSL_sk_pop();
    if (ptr != (long *)0x0) {
      lVar2 = *ptr;
      if (*(code **)(lVar2 + 0x18) != (code *)0x0) {
        (**(code **)(lVar2 + 0x18))(ptr);
        lVar2 = *ptr;
      }
      *(int *)(lVar2 + 0x20) = *(int *)(lVar2 + 0x20) + -1;
      CRYPTO_free((void *)ptr[1]);
      CRYPTO_free((void *)ptr[2]);
      CRYPTO_free(ptr);
    }
  }
  OPENSSL_sk_free(initialized_modules);
  initialized_modules = 0;
  return;
}

