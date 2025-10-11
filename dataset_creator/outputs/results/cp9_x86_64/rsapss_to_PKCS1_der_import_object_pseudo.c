
void rsapss_to_PKCS1_der_import_object(undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(ossl_rsapss_keymgmt_functions,*param_1,param_2,param_3);
  return;
}

