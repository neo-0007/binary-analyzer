
void x25519_to_SubjectPublicKeyInfo_der_free_object(undefined8 param_1)

{
  ossl_prov_free_key(ossl_x25519_keymgmt_functions,param_1);
  return;
}

