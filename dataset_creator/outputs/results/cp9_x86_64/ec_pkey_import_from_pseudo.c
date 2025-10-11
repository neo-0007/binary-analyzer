
undefined8 ec_pkey_import_from(undefined8 param_1,EVP_PKEY_CTX *param_2)

{
  int iVar1;
  EVP_PKEY *pkey;
  EC_KEY *key;
  
  pkey = EVP_PKEY_CTX_get0_pkey(param_2);
  key = (EC_KEY *)EC_KEY_new_ex(*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_2 + 0x10));
  if (key == (EC_KEY *)0x0) {
    ERR_new();
    ERR_set_debug("../crypto/ec/ec_ameth.c",0x26e,"ec_pkey_import_from");
    ERR_set_error(5,0xc0100,0);
    return 0;
  }
  iVar1 = ossl_ec_group_fromdata(key,param_1);
  if ((((iVar1 != 0) && (iVar1 = ossl_ec_key_otherparams_fromdata(key,param_1), iVar1 != 0)) &&
      (iVar1 = ossl_ec_key_fromdata(key,param_1,1), iVar1 != 0)) &&
     (iVar1 = EVP_PKEY_assign(pkey,0x198,key), iVar1 != 0)) {
    return 1;
  }
  EC_KEY_free(key);
  return 0;
}

