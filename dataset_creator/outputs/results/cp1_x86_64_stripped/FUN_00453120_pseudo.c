
undefined8 FUN_00453120(undefined8 param_1,undefined8 param_2,undefined8 *param_3,ulong param_4)

{
  int iVar1;
  
  iVar1 = FUN_0043b840();
  if (((iVar1 != 0) && (0x1f < param_4)) && (iVar1 = FUN_00593fd0(param_2,param_1), iVar1 != 0)) {
    *param_3 = 0x20;
    return 1;
  }
  return 0;
}

