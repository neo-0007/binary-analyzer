
long FUN_0069ee90(long *param_1,undefined1 *param_2,long param_3)

{
  long lVar1;
  
  lVar1 = (long)param_2 - *param_1;
  if (param_3 != *param_1 + param_1[1]) {
    FUN_0069e450(param_1,lVar1,param_3 - (long)param_2);
    return *param_1 + lVar1;
  }
  param_1[1] = lVar1;
  *param_2 = 0;
  return *param_1 + lVar1;
}

