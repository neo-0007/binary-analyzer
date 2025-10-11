
void ossl_method_store_free(void *param_1)

{
  if (param_1 != (void *)0x0) {
    ossl_sa_doall_arg(*(undefined8 *)((long)param_1 + 8),alg_cleanup,param_1);
    ossl_sa_free(*(undefined8 *)((long)param_1 + 8));
    CRYPTO_THREAD_lock_free(*(undefined8 *)((long)param_1 + 0x10));
    CRYPTO_free(param_1);
    return;
  }
  return;
}

