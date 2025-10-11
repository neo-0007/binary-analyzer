
undefined8 * provider_store_new(undefined8 param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  puVar1 = (undefined8 *)CRYPTO_zalloc(0x50,"../crypto/provider_core.c",0x134);
  if (puVar1 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  lVar2 = OPENSSL_sk_new(ossl_provider_cmp);
  puVar1[1] = lVar2;
  if (lVar2 != 0) {
    lVar2 = CRYPTO_THREAD_lock_new();
    puVar1[3] = lVar2;
    if (lVar2 != 0) {
      lVar2 = OPENSSL_sk_new_null();
      puVar1[2] = lVar2;
      if (lVar2 != 0) {
        lVar2 = CRYPTO_THREAD_lock_new();
        puVar1[4] = lVar2;
        if (lVar2 != 0) {
          *(byte *)(puVar1 + 9) = *(byte *)(puVar1 + 9) | 1;
          *puVar1 = param_1;
          return puVar1;
        }
      }
    }
  }
  provider_store_free_part_0(puVar1);
  return (undefined8 *)0x0;
}

