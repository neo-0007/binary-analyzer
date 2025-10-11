
ulong fix_ec_param_enc(int param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  char *pcVar3;
  ulong uVar4;
  
  uVar1 = default_check_constprop_0();
  if ((int)uVar1 < 1) {
    return (ulong)uVar1;
  }
  if (*(int *)(param_3 + 8) != 2) {
    return 0;
  }
  if (param_1 == 1) {
    if (*(int *)(param_3 + 0x1c) == 0) {
      pcVar3 = "explicit";
LAB_005152c7:
      *(char **)(param_3 + 0x20) = pcVar3;
      *(undefined4 *)(param_3 + 0x1c) = 0;
      uVar4 = default_fixup_args(1,param_2,param_3);
      return uVar4;
    }
    if (*(int *)(param_3 + 0x1c) == 1) {
      pcVar3 = "named_curve";
      goto LAB_005152c7;
    }
LAB_0051520a:
    ERR_new();
    ERR_set_debug("../crypto/evp/ctrl_params_translate.c",0x466,"fix_ec_param_enc");
    uVar4 = 0xfffffffe;
    ERR_set_error(6,0x93,0);
  }
  else {
    uVar1 = default_fixup_args(param_1,param_2,param_3);
    uVar4 = (ulong)uVar1;
    if ((int)uVar1 < 1) {
      return uVar4;
    }
    if (param_1 != 7) {
      return uVar4;
    }
    pcVar3 = *(char **)(param_3 + 0x20);
    iVar2 = strcmp(pcVar3,"explicit");
    if (iVar2 != 0) {
      iVar2 = strcmp(pcVar3,"named_curve");
      if (iVar2 != 0) {
        *(undefined4 *)(param_3 + 0x1c) = 0xfffffffe;
        *(undefined8 *)(param_3 + 0x20) = 0;
        goto LAB_0051520a;
      }
      iVar2 = 1;
    }
    *(int *)(param_3 + 0x1c) = iVar2;
    *(undefined8 *)(param_3 + 0x20) = 0;
  }
  return uVar4;
}

