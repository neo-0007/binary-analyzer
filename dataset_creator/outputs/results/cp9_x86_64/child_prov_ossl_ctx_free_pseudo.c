
void child_prov_ossl_ctx_free(void *param_1)

{
  CRYPTO_THREAD_lock_free(*(undefined8 *)((long)param_1 + 0x10));
  CRYPTO_free(param_1);
  return;
}

