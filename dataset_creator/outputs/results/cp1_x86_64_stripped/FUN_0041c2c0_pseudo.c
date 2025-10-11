
long FUN_0041c2c0(long param_1,undefined8 param_2,undefined4 param_3)

{
  long lVar1;
  
  if (param_1 != 0) {
    lVar1 = thunk_FUN_007129d0();
    lVar1 = FUN_0041ad90(lVar1 + 1,param_2,param_3);
    if (lVar1 != 0) {
      lVar1 = thunk_FUN_00712800(lVar1,param_1);
    }
    return lVar1;
  }
  return 0;
}

