
undefined1  [16] FUN_007c0380(long param_1,long param_2,undefined8 param_3,ulong param_4)

{
  undefined1 auVar1 [16];
  
  if (param_4 <= (ulong)(param_2 - param_1)) {
    if (param_1 != 0) {
      thunk_FUN_00713a50(param_1,param_3,param_4);
    }
    auVar1._8_8_ = param_2;
    auVar1._0_8_ = param_4 + param_1;
    return auVar1;
  }
  return ZEXT816(0);
}

