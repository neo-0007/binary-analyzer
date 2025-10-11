
void ossl_provider_child_cb_free(void *param_1)

{
  CRYPTO_free(param_1);
  return;
}

