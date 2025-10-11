
bool FUN_00488bf0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  
  if ((*(byte *)(param_1 + 0x54) & 1) != 0) {
    iVar1 = FUN_0054e520();
    return iVar1 == 0;
  }
  iVar1 = FUN_0054e990(param_1 + 0xf8,param_2,param_4,param_3);
  return iVar1 == 0;
}

