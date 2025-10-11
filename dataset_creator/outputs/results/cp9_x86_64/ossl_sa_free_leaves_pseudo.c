
void ossl_sa_free_leaves(void *param_1)

{
  sa_doall(param_1,sa_free_node,sa_free_leaf,0);
  CRYPTO_free(param_1);
  return;
}

