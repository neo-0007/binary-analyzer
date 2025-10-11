
undefined8 ec_copy_parameters(long param_1,long param_2)

{
  int iVar1;
  EC_GROUP *pEVar2;
  EC_KEY *key;
  
  pEVar2 = EC_KEY_get0_group(*(EC_KEY **)(param_2 + 0x20));
  pEVar2 = EC_GROUP_dup(pEVar2);
  if (pEVar2 == (EC_GROUP *)0x0) {
    return 0;
  }
  key = *(EC_KEY **)(param_1 + 0x20);
  if (key == (EC_KEY *)0x0) {
    key = EC_KEY_new();
    *(EC_KEY **)(param_1 + 0x20) = key;
    if (key == (EC_KEY *)0x0) goto LAB_004db1cb;
  }
  iVar1 = EC_KEY_set_group(key,pEVar2);
  if (iVar1 != 0) {
    EC_GROUP_free(pEVar2);
    return 1;
  }
LAB_004db1cb:
  EC_GROUP_free(pEVar2);
  return 0;
}

