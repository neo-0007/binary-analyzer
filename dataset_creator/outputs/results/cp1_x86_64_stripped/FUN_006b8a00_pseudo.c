
undefined8 FUN_006b8a00(long param_1,long param_2,undefined8 param_3,undefined8 *param_4)

{
  int iVar1;
  
  if (*(char **)(param_1 + 8) != *(char **)(param_2 + 8)) {
    if (**(char **)(param_1 + 8) == '*') {
      return 0;
    }
    iVar1 = thunk_FUN_00712780();
    if (iVar1 != 0) {
      return 0;
    }
  }
  *param_4 = param_3;
  param_4[2] = 0x10;
  *(undefined4 *)(param_4 + 1) = 6;
  return 1;
}

