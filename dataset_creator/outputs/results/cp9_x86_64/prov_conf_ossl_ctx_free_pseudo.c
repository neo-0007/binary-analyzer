
void prov_conf_ossl_ctx_free(undefined8 *param_1)

{
  OPENSSL_sk_pop_free(param_1[1],ossl_provider_free);
  CRYPTO_THREAD_lock_free(*param_1);
  CRYPTO_free(param_1);
  return;
}

