
void ossl_policy_node_free(void *param_1)

{
  CRYPTO_free(param_1);
  return;
}

