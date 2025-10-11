
void ossl_ctx_global_properties_free(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    ossl_property_free(*param_1);
    CRYPTO_free(param_1);
    return;
  }
  return;
}

