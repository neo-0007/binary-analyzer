
void dh_to_PKCS3_der_free_object(undefined8 param_1)

{
  ossl_prov_free_key(ossl_dh_keymgmt_functions,param_1);
  return;
}

