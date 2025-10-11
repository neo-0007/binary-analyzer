
void provider_deactivate_free(byte *param_1)

{
  if ((*param_1 & 2) == 0) {
    ossl_provider_free();
    return;
  }
  ossl_provider_deactivate(param_1,1);
  ossl_provider_free(param_1);
  return;
}

