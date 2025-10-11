
void ossl_prov_ctx_free(void *param_1)

{
  CRYPTO_free(param_1);
  return;
}

