
void x25519_to_SubjectPublicKeyInfo_der_import_object
               (undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  ossl_prov_import_key(ossl_x25519_keymgmt_functions,*param_1,param_2,param_3);
  return;
}

