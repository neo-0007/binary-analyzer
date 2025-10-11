
undefined8 fix_dh_nid5114(int param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  
  uVar1 = default_check_constprop_0();
  if ((int)uVar1 < 1) {
    return uVar1;
  }
  if (*(int *)(param_3 + 8) != 2) {
    return 0;
  }
  if (param_1 == 1) {
    uVar1 = ossl_ffc_uid_to_dh_named_group(*(undefined4 *)(param_3 + 0x1c));
    lVar3 = ossl_ffc_named_group_get_name(uVar1);
    *(long *)(param_3 + 0x20) = lVar3;
    if (lVar3 == 0) {
      ERR_new();
      uVar1 = 0x40a;
LAB_0051590d:
      ERR_set_debug("../crypto/evp/ctrl_params_translate.c",uVar1,"fix_dh_nid5114");
      ERR_set_error(6,0xde,0);
      return 0;
    }
  }
  else {
    if (param_1 != 4) goto LAB_005158b8;
    if (*(char **)(param_3 + 0x20) == (char *)0x0) {
      return 0;
    }
    uVar2 = strtoll(*(char **)(param_3 + 0x20),(char **)0x0,10);
    uVar1 = ossl_ffc_uid_to_dh_named_group(uVar2 & 0xffffffff);
    lVar3 = ossl_ffc_named_group_get_name(uVar1);
    *(long *)(param_3 + 0x20) = lVar3;
    if (lVar3 == 0) {
      ERR_new();
      uVar1 = 0x416;
      goto LAB_0051590d;
    }
  }
  *(undefined4 *)(param_3 + 0x1c) = 0;
LAB_005158b8:
  uVar1 = default_fixup_args(param_1,param_2,param_3);
  return uVar1;
}

