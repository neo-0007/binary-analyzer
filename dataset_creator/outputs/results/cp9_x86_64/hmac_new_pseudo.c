
undefined8 * hmac_new(undefined8 param_1)

{
  int iVar1;
  undefined8 *ptr;
  long lVar2;
  
  iVar1 = ossl_prov_is_running();
  if (iVar1 == 0) {
    return (undefined8 *)0x0;
  }
  ptr = (undefined8 *)CRYPTO_zalloc(0xa0,"../providers/implementations/macs/hmac_prov.c",0x50);
  if (ptr != (undefined8 *)0x0) {
    lVar2 = HMAC_CTX_new();
    ptr[1] = lVar2;
    if (lVar2 != 0) {
      *ptr = param_1;
      return ptr;
    }
  }
  CRYPTO_free(ptr);
  return (undefined8 *)0x0;
}

