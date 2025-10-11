
void ossl_ffc_params_cleanup(undefined8 *param_1)

{
  BN_free((BIGNUM *)*param_1);
  BN_free((BIGNUM *)param_1[1]);
  BN_free((BIGNUM *)param_1[2]);
  BN_free((BIGNUM *)param_1[3]);
  CRYPTO_free((void *)param_1[4]);
  ossl_ffc_params_init(param_1);
  return;
}

