
void op_cache_free(undefined8 *param_1)

{
  evp_keymgmt_freedata(*param_1,param_1[1]);
  EVP_KEYMGMT_free(*param_1);
  CRYPTO_free(param_1);
  return;
}

