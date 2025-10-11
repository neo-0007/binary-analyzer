
int ec_pkey_param_check(long param_1)

{
  EC_GROUP *group;
  int iVar1;
  
  group = *(EC_GROUP **)(*(long *)(param_1 + 0x20) + 0x18);
  if (group != (EC_GROUP *)0x0) {
    iVar1 = EC_GROUP_check(group,(BN_CTX *)0x0);
    return iVar1;
  }
  ERR_new();
  ERR_set_debug("../crypto/ec/ec_ameth.c",0x1d2,"ec_pkey_param_check");
  ERR_set_error(0x10,0x7c,0);
  return 0;
}

