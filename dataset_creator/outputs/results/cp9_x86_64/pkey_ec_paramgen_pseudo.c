
int pkey_ec_paramgen(long param_1,EVP_PKEY *param_2)

{
  long *plVar1;
  int iVar2;
  EC_KEY *key;
  
  plVar1 = *(long **)(param_1 + 0x98);
  if (*plVar1 != 0) {
    key = EC_KEY_new();
    iVar2 = 0;
    if (key != (EC_KEY *)0x0) {
      iVar2 = EC_KEY_set_group(key,(EC_GROUP *)*plVar1);
      if (iVar2 == 0) {
        EC_KEY_free(key);
        iVar2 = 0;
      }
      else {
        iVar2 = EVP_PKEY_assign(param_2,0x198,key);
        if (iVar2 == 0) {
          EC_KEY_free(key);
          iVar2 = 0;
        }
      }
    }
    return iVar2;
  }
  ERR_new();
  ERR_set_debug("../crypto/ec/ec_pmeth.c",0x1b7,"pkey_ec_paramgen");
  ERR_set_error(0x10,0x8b,0);
  return 0;
}

