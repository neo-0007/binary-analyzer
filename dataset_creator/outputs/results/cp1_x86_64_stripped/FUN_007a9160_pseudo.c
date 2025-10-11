
long FUN_007a9160(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  lVar1 = FUN_00401110(param_2,param_3);
  FUN_00756660(param_1,param_2,lVar1);
  param_1 = param_1 + lVar1 * 4;
  if (param_3 != lVar1) {
    lVar1 = thunk_FUN_007a90f0(param_1,0,param_3 - lVar1);
    return lVar1;
  }
  return param_1;
}

