
undefined8 FUN_00475e90(long param_1,undefined8 param_2,ulong *param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_0043b840();
  if (iVar1 == 0) {
    return 0;
  }
  *param_3 = (ulong)*(byte *)(param_1 + 0x80);
  uVar2 = FUN_00451620(param_2,param_1);
  return uVar2;
}

