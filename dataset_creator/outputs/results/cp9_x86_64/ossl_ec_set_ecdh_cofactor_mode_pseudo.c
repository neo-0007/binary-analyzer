
undefined4 ossl_ec_set_ecdh_cofactor_mode(EC_KEY *param_1,uint param_2)

{
  int iVar1;
  EC_GROUP *pEVar2;
  long lVar3;
  
  pEVar2 = EC_KEY_get0_group(param_1);
  if ((1 < param_2) || (lVar3 = EC_GROUP_get0_cofactor(pEVar2), lVar3 == 0)) {
    return 0;
  }
  iVar1 = BN_is_one(lVar3);
  if (iVar1 != 0) {
    return 1;
  }
  if (param_2 == 1) {
    EC_KEY_set_flags(param_1,0x1000);
    return 1;
  }
  EC_KEY_clear_flags(param_1,0x1000);
  return 1;
}

