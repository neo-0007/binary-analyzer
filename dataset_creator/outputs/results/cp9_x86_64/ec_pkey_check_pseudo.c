
int ec_pkey_check(long param_1)

{
  int iVar1;
  
  if (*(long *)(*(EC_KEY **)(param_1 + 0x20) + 0x28) != 0) {
    iVar1 = EC_KEY_check_key(*(EC_KEY **)(param_1 + 0x20));
    return iVar1;
  }
  ERR_new();
  ERR_set_debug("../crypto/ec/ec_ameth.c",0x1b5,"ec_pkey_check");
  ERR_set_error(0x10,0x7d,0);
  return 0;
}

