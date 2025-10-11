
undefined8 FUN_00522ca0(int param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  char *pcVar5;
  
  uVar3 = FUN_00521cc0();
  if ((int)uVar3 < 1) {
    return uVar3;
  }
  if (*(int *)(param_3 + 8) == 2) {
    if (param_1 == 1) goto LAB_00522d45;
  }
  else if ((*(int *)(param_3 + 8) == 1) && (param_1 == 8)) {
LAB_00522d45:
    iVar1 = *(int *)(param_3 + 0x1c);
    if (iVar1 == 0) {
      pcVar5 = "EXTRACT_AND_EXPAND";
    }
    else if (iVar1 == 1) {
      pcVar5 = "EXTRACT_ONLY";
    }
    else {
      if (iVar1 != 2) {
        return 0;
      }
      pcVar5 = "EXPAND_ONLY";
    }
    *(char **)(param_3 + 0x20) = pcVar5;
    uVar2 = thunk_FUN_007129d0();
    *(undefined4 *)(param_3 + 0x1c) = uVar2;
  }
  uVar3 = FUN_00521e40(param_1,param_2,param_3);
  if ((int)uVar3 < 1) {
    return uVar3;
  }
  if (*(int *)(param_3 + 8) == 2) {
    if (param_1 != 7) {
      return 1;
    }
    uVar3 = *(undefined8 *)(param_3 + 0x20);
    iVar1 = thunk_FUN_00712780(uVar3,"EXTRACT_AND_EXPAND");
    if (iVar1 == 0) {
      lVar4 = 0;
    }
    else {
      iVar1 = thunk_FUN_00712780(uVar3,"EXTRACT_ONLY");
      if (iVar1 != 0) goto LAB_00522d97;
      lVar4 = 1;
    }
  }
  else {
    if (*(int *)(param_3 + 8) != 1) {
      return 1;
    }
    if (param_1 != 2) {
      return 1;
    }
    uVar3 = *(undefined8 *)(param_3 + 0x20);
    iVar1 = thunk_FUN_00712780(uVar3,"EXTRACT_AND_EXPAND");
    if ((iVar1 == 0) || (iVar1 = thunk_FUN_00712780(uVar3,"EXTRACT_ONLY"), iVar1 == 0))
    goto LAB_00522d20;
LAB_00522d97:
    iVar1 = thunk_FUN_00712780(uVar3,"EXPAND_ONLY");
    if (iVar1 != 0) {
      return 0;
    }
    lVar4 = 2;
    if (param_1 == 2) goto LAB_00522d20;
  }
  *(undefined4 *)(param_3 + 0x1c) = (&DAT_00904380)[lVar4 * 4];
LAB_00522d20:
  *(undefined8 *)(param_3 + 0x20) = 0;
  return 1;
}

