
undefined8 FUN_006242b0(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_5 == param_3) {
    if (*(char **)(param_1 + 8) == *(char **)(param_4 + 8)) {
      return 6;
    }
    if ((**(char **)(param_1 + 8) != '*') && (iVar1 = thunk_FUN_00712780(), iVar1 == 0)) {
      return 6;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x006242d9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(**(long **)(param_1 + 0x10) + 0x40))
                    (*(long **)(param_1 + 0x10),param_2,param_3,param_4,param_5);
  return uVar2;
}

