
undefined8 FUN_006b8a50(long param_1,long *param_2,undefined8 param_3,uint param_4)

{
  int iVar1;
  undefined8 uVar2;
  
  if (*(char **)(param_1 + 8) == (char *)param_2[1]) {
    return 1;
  }
  if ((**(char **)(param_1 + 8) != '*') && (iVar1 = thunk_FUN_00712780(), iVar1 == 0)) {
    return 1;
  }
  if (3 < param_4) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x006b8ab8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(*param_2 + 0x28))(param_2,param_1,param_3);
  return uVar2;
}

