
void value_free_stack_doall(undefined8 *param_1)

{
  undefined8 uVar1;
  int iVar2;
  void *ptr;
  bool bVar3;
  
  if (param_1[1] != 0) {
    return;
  }
  uVar1 = param_1[2];
  iVar2 = OPENSSL_sk_num(uVar1);
  iVar2 = iVar2 + -1;
  if (-1 < iVar2) {
    do {
      ptr = (void *)OPENSSL_sk_value(uVar1,iVar2);
      CRYPTO_free(*(void **)((long)ptr + 0x10));
      CRYPTO_free(*(void **)((long)ptr + 8));
      CRYPTO_free(ptr);
      bVar3 = iVar2 != 0;
      iVar2 = iVar2 + -1;
    } while (bVar3);
  }
  OPENSSL_sk_free(uVar1);
  CRYPTO_free((void *)*param_1);
  CRYPTO_free(param_1);
  return;
}

