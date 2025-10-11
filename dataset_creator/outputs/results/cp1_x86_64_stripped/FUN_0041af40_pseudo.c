
long FUN_0041af40(long param_1,ulong param_2,ulong param_3,undefined8 param_4,undefined4 param_5)

{
  long lVar1;
  
  if (param_1 == 0) {
    lVar1 = FUN_0041ad90(param_3,param_4,param_5);
    return lVar1;
  }
  if (param_3 == 0) {
    lVar1 = 0;
    FUN_0041aef0(param_1,param_2,param_4,param_5);
  }
  else {
    if (param_3 < param_2) {
      FUN_004227b0(param_3 + param_1,param_2 - param_3);
      return param_1;
    }
    lVar1 = FUN_0041ad90(param_3,param_4,param_5);
    if (lVar1 != 0) {
      thunk_FUN_00713a50(lVar1,param_1,param_2);
      FUN_0041aef0(param_1,param_2,param_4,param_5);
    }
  }
  return lVar1;
}

