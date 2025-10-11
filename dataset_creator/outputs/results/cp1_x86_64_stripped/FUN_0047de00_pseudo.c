
undefined8
FUN_0047de00(long param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,ulong param_5)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_0043b840();
  if ((iVar1 != 0) &&
     ((*(ulong *)(param_1 + 0x160) == param_5 || (*(ulong *)(param_1 + 0x160) == 0)))) {
    uVar2 = FUN_004f7940(0,param_4,param_5 & 0xffffffff,param_2,param_3,
                         *(undefined8 *)(param_1 + 0x10));
    return uVar2;
  }
  return 0;
}

