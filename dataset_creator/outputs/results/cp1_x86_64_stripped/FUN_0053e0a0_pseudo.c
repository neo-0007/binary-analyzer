
long FUN_0053e0a0(long param_1,undefined4 param_2)

{
  long lVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  if (*(code **)(param_1 + 0x98) != (code *)0x0) {
    lVar1 = (**(code **)(param_1 + 0x98))(param_2);
    if (lVar1 != 0) {
      return lVar1;
    }
  }
  lVar1 = FUN_0053e710(param_1);
  return lVar1;
}

