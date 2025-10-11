
undefined8 FUN_00452610(undefined8 param_1,undefined8 param_2,undefined8 *param_3,ulong param_4)

{
  int iVar1;
  
  iVar1 = FUN_0043b840();
  if (((iVar1 != 0) && (0x1b < param_4)) &&
     (iVar1 = thunk_FUN_00434d50(param_2,param_1), iVar1 != 0)) {
    *param_3 = 0x1c;
    return 1;
  }
  return 0;
}

