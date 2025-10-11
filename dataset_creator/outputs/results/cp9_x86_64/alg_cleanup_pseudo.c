
void alg_cleanup(undefined8 param_1,void *param_2,long param_3)

{
  if (param_2 != (void *)0x0) {
    OPENSSL_sk_pop_free(*(undefined8 *)((long)param_2 + 8),impl_free);
    OPENSSL_LH_doall(*(undefined8 *)((long)param_2 + 0x10),impl_cache_free);
    OPENSSL_LH_free(*(undefined8 *)((long)param_2 + 0x10));
    CRYPTO_free(param_2);
  }
  if (param_3 != 0) {
    ossl_sa_set(*(undefined8 *)(param_3 + 8),param_1,0);
    return;
  }
  return;
}

