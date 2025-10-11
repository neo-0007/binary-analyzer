
undefined8
FUN_006b8ad0(long param_1,undefined8 param_2,undefined4 param_3,long param_4,long param_5,
            long param_6,long param_7,long *param_8)

{
  char *pcVar1;
  int iVar2;
  
  pcVar1 = *(char **)(param_1 + 8);
  if (param_5 == param_7) {
    if (*(char **)(param_6 + 8) == pcVar1) {
LAB_006b8b70:
      *(undefined4 *)((long)param_8 + 0xc) = param_3;
      return 0;
    }
    if (*pcVar1 == '*') {
      if (*(char **)(param_4 + 8) != pcVar1) {
        return 0;
      }
      goto LAB_006b8b0f;
    }
    iVar2 = thunk_FUN_00712780(pcVar1);
    if (iVar2 == 0) goto LAB_006b8b70;
    if (pcVar1 == *(char **)(param_4 + 8)) goto LAB_006b8b0f;
  }
  else {
    if (*(char **)(param_4 + 8) == pcVar1) goto LAB_006b8b0f;
    if (*pcVar1 == '*') {
      return 0;
    }
  }
  iVar2 = thunk_FUN_00712780(pcVar1);
  if (iVar2 != 0) {
    return 0;
  }
LAB_006b8b0f:
  *param_8 = param_5;
  *(undefined4 *)(param_8 + 1) = param_3;
  *(undefined4 *)(param_8 + 2) = 1;
  return 0;
}

