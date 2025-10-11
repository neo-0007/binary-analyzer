
undefined8 ossl_method_store_cache_flush_all(long param_1)

{
  int iVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  iVar1 = CRYPTO_THREAD_write_lock(*(undefined8 *)(param_1 + 0x10));
  if (iVar1 == 0) {
    return 0;
  }
  ossl_sa_doall(*(undefined8 *)(param_1 + 8),impl_cache_flush_alg);
  *(undefined8 *)(param_1 + 0x18) = 0;
  CRYPTO_THREAD_unlock(*(undefined8 *)(param_1 + 0x10));
  return 1;
}

