
void ossl_prov_digest_reset(undefined8 *param_1)

{
  EVP_MD_free(param_1[1]);
  *param_1 = 0;
  param_1[1] = 0;
  ENGINE_finish((ENGINE *)param_1[2]);
  param_1[2] = 0;
  return;
}

