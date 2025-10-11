
void sm2_to_EncryptedPrivateKeyInfo_der_free_object(undefined8 param_1)

{
  ossl_prov_free_key(ossl_sm2_keymgmt_functions,param_1);
  return;
}

