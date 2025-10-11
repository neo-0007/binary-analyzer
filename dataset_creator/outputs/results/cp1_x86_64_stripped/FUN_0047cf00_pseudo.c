
undefined8
FUN_0047cf00(long param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,ulong param_5)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (*(long *)(param_1 + 0x160) == 0) {
    iVar1 = FUN_0043b840();
    if (iVar1 == 0) {
      return 0;
    }
  }
  else {
    iVar1 = FUN_0040ac10();
    iVar2 = FUN_0043b840();
    if (iVar2 == 0) {
      return 0;
    }
    if (((long)iVar1 != 0) && (param_5 != (long)iVar1)) {
      return 0;
    }
  }
  uVar3 = FUN_004da940(0,param_4,param_5 & 0xffffffff,param_2,param_3,
                       *(undefined8 *)(param_1 + 0x10));
  return uVar3;
}

