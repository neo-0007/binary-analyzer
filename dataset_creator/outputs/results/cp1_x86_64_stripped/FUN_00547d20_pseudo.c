
undefined8 FUN_00547d20(long param_1,long param_2,long *param_3,long param_4)

{
  int iVar1;
  
  if ((param_4 == 0) || ((*(byte *)(param_1 + 0x30) & 1) == 0)) {
    iVar1 = FUN_00547360(param_1,param_2 + param_4,param_3);
    if (iVar1 != 0) {
      if (*param_3 != 0) {
        *param_3 = *param_3 + param_4;
      }
      return 1;
    }
  }
  return 0;
}

