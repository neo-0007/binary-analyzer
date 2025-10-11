
undefined4 * FUN_006b63a0(long *param_1,undefined4 *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  lVar1 = (long)param_2 - *param_1;
  lVar2 = lVar1 >> 2;
  if (param_3 != *param_1 + param_1[1] * 4) {
    FUN_006b59b0(param_1,lVar2,param_3 - (long)param_2 >> 2);
    return (undefined4 *)(*param_1 + lVar1);
  }
  param_1[1] = lVar2;
  *param_2 = 0;
  return param_2;
}

