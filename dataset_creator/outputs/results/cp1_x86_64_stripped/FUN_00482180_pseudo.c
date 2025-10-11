
undefined8
FUN_00482180(long param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,ulong param_5)

{
  undefined8 uVar1;
  
  if ((*(ulong *)(param_1 + 0x170) != param_5) && (*(ulong *)(param_1 + 0x170) != 0)) {
    return 0;
  }
  uVar1 = FUN_00591440(param_4,param_5 & 0xffffffff,param_2,param_3,*(undefined8 *)(param_1 + 0x10))
  ;
  return uVar1;
}

