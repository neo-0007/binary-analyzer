
void property_defn_free(void *param_1)

{
  ossl_property_free(*(undefined8 *)((long)param_1 + 8));
  CRYPTO_free(param_1);
  return;
}

