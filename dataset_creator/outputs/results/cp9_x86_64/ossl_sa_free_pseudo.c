
void ossl_sa_free(void *param_1)

{
  sa_doall(param_1,sa_free_node,0,0);
  CRYPTO_free(param_1);
  return;
}

