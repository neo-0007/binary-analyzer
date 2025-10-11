
undefined8 fix_dh_nid(int param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = default_check_constprop_0();
  if (0 < (int)uVar1) {
    if (*(int *)(param_3 + 8) == 2) {
      if (param_1 == 1) {
        uVar1 = ossl_ffc_uid_to_dh_named_group(*(undefined4 *)(param_3 + 0x1c));
        lVar2 = ossl_ffc_named_group_get_name(uVar1);
        *(long *)(param_3 + 0x20) = lVar2;
        if (lVar2 == 0) {
          ERR_new();
          ERR_set_debug("../crypto/evp/ctrl_params_translate.c",0x3ef,"fix_dh_nid");
          ERR_set_error(6,0xde,0);
          return 0;
        }
        *(undefined4 *)(param_3 + 0x1c) = 0;
      }
      uVar1 = default_fixup_args(param_1,param_2,param_3);
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}

