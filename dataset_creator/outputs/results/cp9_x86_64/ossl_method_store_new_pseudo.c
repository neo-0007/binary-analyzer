
undefined8 * ossl_method_store_new(undefined8 param_1)

{
  undefined8 *ptr;
  long lVar1;
  undefined8 *puVar2;
  
  ptr = (undefined8 *)CRYPTO_zalloc(0x28,"../crypto/property/property.c",0xee);
  puVar2 = ptr;
  if (ptr != (undefined8 *)0x0) {
    *ptr = param_1;
    lVar1 = ossl_sa_new();
    ptr[1] = lVar1;
    if (lVar1 == 0) {
      puVar2 = (undefined8 *)0x0;
      CRYPTO_free(ptr);
    }
    else {
      lVar1 = CRYPTO_THREAD_lock_new();
      ptr[2] = lVar1;
      if (lVar1 == 0) {
        ossl_sa_free(ptr[1]);
        CRYPTO_free(ptr);
        puVar2 = (undefined8 *)0x0;
      }
    }
  }
  return puVar2;
}

