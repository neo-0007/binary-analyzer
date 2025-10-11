
ulong fix_ec_paramgen_curve_nid(int param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  char *pcVar3;
  ulong uVar4;
  
  uVar1 = default_check_constprop_0();
  uVar4 = (ulong)uVar1;
  if (0 < (int)uVar1) {
    if (*(int *)(param_3 + 8) != 2) {
      return 0;
    }
    if (param_1 == 1) {
      pcVar3 = OBJ_nid2sn(*(int *)(param_3 + 0x1c));
      *(char **)(param_3 + 0x20) = pcVar3;
      *(undefined4 *)(param_3 + 0x1c) = 0;
      uVar4 = default_fixup_args(1,param_2,param_3);
      return uVar4;
    }
    uVar1 = default_fixup_args(param_1,param_2,param_3);
    uVar4 = (ulong)uVar1;
    if ((param_1 == 7) && (0 < (int)uVar1)) {
      iVar2 = OBJ_sn2nid(*(char **)(param_3 + 0x20));
      *(undefined8 *)(param_3 + 0x20) = 0;
      *(int *)(param_3 + 0x1c) = iVar2;
    }
  }
  return uVar4;
}

