
undefined8 FUN_00548af0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  
  if (param_1 != 0) {
    uVar1 = FUN_00548060(param_1,param_3,param_4);
    return uVar1;
  }
  lVar2 = FUN_0041cdd0(param_2,param_3);
  if (lVar2 == 0) {
    return 1;
  }
  uVar1 = thunk_FUN_0041d660(lVar2,param_4);
  return uVar1;
}

