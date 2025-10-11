
void dhx_to_X9_42_der_free_object(undefined8 param_1)

{
  ossl_prov_free_key(ossl_dhx_keymgmt_functions,param_1);
  return;
}

