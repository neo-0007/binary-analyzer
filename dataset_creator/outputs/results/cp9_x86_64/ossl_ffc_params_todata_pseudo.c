
bool ossl_ffc_params_todata(long *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  if (param_1 == (long *)0x0) {
    return false;
  }
  if ((((((*param_1 == 0) || (iVar1 = ossl_param_build_set_bn(param_2,param_3,"p"), iVar1 != 0)) &&
        ((param_1[1] == 0 || (iVar1 = ossl_param_build_set_bn(param_2,param_3,"q"), iVar1 != 0))))
       && ((param_1[2] == 0 || (iVar1 = ossl_param_build_set_bn(param_2,param_3,"g"), iVar1 != 0))))
      && ((param_1[3] == 0 ||
          (iVar1 = ossl_param_build_set_bn(param_2,param_3,&DAT_007dbd86), iVar1 != 0)))) &&
     ((((iVar1 = ossl_param_build_set_int(param_2,param_3,"gindex",(int)param_1[7]), iVar1 != 0 &&
        (iVar1 = ossl_param_build_set_int(param_2,param_3,"pcounter",(int)param_1[6]), iVar1 != 0))
       && (iVar1 = ossl_param_build_set_int
                             (param_2,param_3,"hindex",*(undefined4 *)((long)param_1 + 0x3c)),
          iVar1 != 0)) &&
      ((param_1[4] == 0 ||
       (iVar1 = ossl_param_build_set_octet_string(param_2,param_3,"seed",param_1[4],param_1[5]),
       iVar1 != 0)))))) {
    if (*(int *)((long)param_1 + 0x34) != 0) {
      uVar2 = ossl_ffc_uid_to_dh_named_group();
      lVar3 = ossl_ffc_named_group_get_name(uVar2);
      if (lVar3 == 0) {
        return false;
      }
      iVar1 = ossl_param_build_set_utf8_string(param_2,param_3,"group",lVar3);
      if (iVar1 == 0) {
        return false;
      }
    }
    iVar1 = ossl_param_build_set_int(param_2,param_3,"validate-pq",*(uint *)(param_1 + 8) & 1);
    if (((iVar1 != 0) &&
        (iVar1 = ossl_param_build_set_int
                           (param_2,param_3,"validate-g",*(uint *)(param_1 + 8) >> 1 & 1),
        iVar1 != 0)) &&
       ((iVar1 = ossl_param_build_set_int
                           (param_2,param_3,"validate-legacy",*(uint *)(param_1 + 8) >> 2 & 1),
        iVar1 != 0 &&
        ((param_1[9] == 0 ||
         (iVar1 = ossl_param_build_set_utf8_string(param_2,param_3,"digest"), iVar1 != 0)))))) {
      if (param_1[10] != 0) {
        iVar1 = ossl_param_build_set_utf8_string(param_2,param_3,"properties");
        return iVar1 != 0;
      }
      return true;
    }
  }
  return false;
}

