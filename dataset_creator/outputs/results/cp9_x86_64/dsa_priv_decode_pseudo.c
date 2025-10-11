
bool dsa_priv_decode(EVP_PKEY *param_1,undefined8 param_2)

{
  void *key;
  
  key = (void *)ossl_dsa_key_from_pkcs8(param_2,0,0);
  if (key != (void *)0x0) {
    EVP_PKEY_assign(param_1,0x74,key);
  }
  return key != (void *)0x0;
}

