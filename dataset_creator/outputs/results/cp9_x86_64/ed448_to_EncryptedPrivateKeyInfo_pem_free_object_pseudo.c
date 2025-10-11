
void ed448_to_EncryptedPrivateKeyInfo_pem_free_object(undefined8 param_1)

{
  ossl_prov_free_key(ossl_ed448_keymgmt_functions,param_1);
  return;
}

