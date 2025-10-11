
void OSSL_PARAM_BLD_free(void *param_1)

{
  void *ptr;
  int iVar1;
  int iVar2;
  
  if (param_1 != (void *)0x0) {
    iVar1 = OPENSSL_sk_num(*(undefined8 *)((long)param_1 + 0x10));
    if (0 < iVar1) {
      iVar2 = 0;
      do {
        iVar2 = iVar2 + 1;
        ptr = (void *)OPENSSL_sk_pop(*(undefined8 *)((long)param_1 + 0x10));
        CRYPTO_free(ptr);
      } while (iVar1 != iVar2);
    }
    OPENSSL_sk_free(*(undefined8 *)((long)param_1 + 0x10));
    CRYPTO_free(param_1);
    return;
  }
  return;
}

