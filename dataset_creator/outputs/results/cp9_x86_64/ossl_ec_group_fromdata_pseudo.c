
bool ossl_ec_group_fromdata(EC_KEY *param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  EC_GROUP *group;
  bool bVar4;
  
  bVar4 = false;
  if (param_1 != (EC_KEY *)0x0) {
    uVar2 = ossl_ec_key_get0_propq();
    uVar3 = ossl_ec_key_get_libctx(param_1);
    group = (EC_GROUP *)EC_GROUP_new_from_params(param_2,uVar3,uVar2);
    iVar1 = EC_KEY_set_group(param_1,group);
    bVar4 = iVar1 != 0;
    EC_GROUP_free(group);
  }
  return bVar4;
}

