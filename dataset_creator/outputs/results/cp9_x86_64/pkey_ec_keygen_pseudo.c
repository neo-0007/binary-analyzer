
int pkey_ec_keygen(long param_1,EVP_PKEY *param_2)

{
  long *plVar1;
  int iVar2;
  EC_KEY *key;
  
  plVar1 = *(long **)(param_1 + 0x98);
  if ((*(long *)(param_1 + 0x88) == 0) && (*plVar1 == 0)) {
    ERR_new();
    ERR_set_debug("../crypto/ec/ec_pmeth.c",0x1ca,"pkey_ec_keygen");
    ERR_set_error(0x10,0x8b,0);
  }
  else {
    key = EC_KEY_new();
    if (key != (EC_KEY *)0x0) {
      iVar2 = EVP_PKEY_assign(param_2,0x198,key);
      if (iVar2 == 0) {
        EC_KEY_free(key);
        return 0;
      }
      if (*(EVP_PKEY **)(param_1 + 0x88) == (EVP_PKEY *)0x0) {
        iVar2 = EC_KEY_set_group(key,(EC_GROUP *)*plVar1);
      }
      else {
        iVar2 = EVP_PKEY_copy_parameters(param_2,*(EVP_PKEY **)(param_1 + 0x88));
      }
      if (iVar2 != 0) {
        iVar2 = EC_KEY_generate_key(key);
        return iVar2;
      }
    }
  }
  return 0;
}

