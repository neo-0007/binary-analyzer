
EC_GROUP *
EC_GROUP_new_curve_GF2m(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  EC_GROUP *group;
  EC_GROUP *pEVar4;
  
  uVar2 = EC_GF2m_simple_method();
  uVar3 = ossl_bn_get_libctx(param_4);
  group = (EC_GROUP *)ossl_ec_group_new_ex(uVar3,0,uVar2);
  pEVar4 = group;
  if (group != (EC_GROUP *)0x0) {
    iVar1 = EC_GROUP_set_curve(group,param_1,param_2,param_3,param_4);
    if (iVar1 == 0) {
      pEVar4 = (EC_GROUP *)0x0;
      EC_GROUP_free(group);
    }
  }
  return pEVar4;
}

