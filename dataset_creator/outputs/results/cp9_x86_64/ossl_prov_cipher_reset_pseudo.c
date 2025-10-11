
void ossl_prov_cipher_reset(undefined8 *param_1)

{
  EVP_CIPHER_free(param_1[1]);
  *param_1 = 0;
  param_1[1] = 0;
  ENGINE_finish((ENGINE *)param_1[2]);
  param_1[2] = 0;
  return;
}

