
bool ecx_priv_decode_ex(EVP_PKEY *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  void *key;
  
  key = (void *)ossl_ecx_key_from_pkcs8(param_2,param_3,param_4);
  if (key != (void *)0x0) {
    EVP_PKEY_assign(param_1,**(int **)&param_1->references,key);
  }
  return key != (void *)0x0;
}

