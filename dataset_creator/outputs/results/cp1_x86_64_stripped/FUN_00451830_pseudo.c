
undefined8 FUN_00451830(undefined8 param_1,undefined8 param_2,undefined8 *param_3,ulong param_4)

{
  int iVar1;
  
  iVar1 = FUN_0043b840();
  if (((iVar1 != 0) && (0xf < param_4)) && (iVar1 = FUN_0054b1a0(param_2,param_1), iVar1 != 0)) {
    *param_3 = 0x10;
    return 1;
  }
  return 0;
}

