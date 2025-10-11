
ec_key_st * EVP_PKEY_get1_EC_KEY(EVP_PKEY *pkey)

{
  int iVar1;
  EC_KEY *key;
  
  key = (EC_KEY *)evp_pkey_get0_EC_KEY_int();
  if (key != (EC_KEY *)0x0) {
    iVar1 = EC_KEY_up_ref(key);
    if (iVar1 != 0) {
      return key;
    }
  }
  return (ec_key_st *)0x0;
}

