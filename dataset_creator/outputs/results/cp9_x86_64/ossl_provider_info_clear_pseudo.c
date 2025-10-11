
void ossl_provider_info_clear(undefined8 *param_1)

{
  CRYPTO_free((void *)*param_1);
  CRYPTO_free((void *)param_1[1]);
  OPENSSL_sk_pop_free(param_1[3],infopair_free);
  return;
}

