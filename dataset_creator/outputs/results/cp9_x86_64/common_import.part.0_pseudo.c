
bool common_import_part_0(EC_KEY *param_1,uint param_2,undefined8 param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  EC_GROUP *group;
  
  iVar1 = ossl_ec_group_fromdata(param_1,param_3);
  group = EC_KEY_get0_group(param_1);
  if ((group != (EC_GROUP *)0x0) &&
     (iVar2 = EC_GROUP_get_curve_name(group), param_4 == (iVar2 == 0x494))) {
    if ((param_2 & 3) == 0) {
      if ((param_2 & 0x80) == 0) {
        return iVar1 != 0;
      }
      if (iVar1 != 0) goto LAB_0046f8fd;
    }
    else if ((iVar1 != 0) && (iVar1 = ossl_ec_key_fromdata(param_1,param_3,param_2 & 1), iVar1 != 0)
            ) {
      if ((param_2 & 0x80) == 0) {
        return true;
      }
LAB_0046f8fd:
      iVar1 = ossl_ec_key_otherparams_fromdata(param_1,param_3);
      return iVar1 != 0;
    }
  }
  return false;
}

