
void ec_to_EC_der_free_object(undefined8 param_1)

{
  ossl_prov_free_key(ossl_ec_keymgmt_functions,param_1);
  return;
}

