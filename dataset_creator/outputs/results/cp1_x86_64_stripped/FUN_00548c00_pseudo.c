
undefined8
FUN_00548c00(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,ulong param_5)

{
  undefined8 uVar1;
  long lVar2;
  
  if (param_1 != 0) {
    uVar1 = FUN_005482a0(param_1,param_3,param_4,param_5);
    return uVar1;
  }
  lVar2 = FUN_0041cdd0(param_2,param_3);
  if (lVar2 != 0) {
    if (*(ulong *)(lVar2 + 0x18) < param_5) {
      return 0;
    }
    *(ulong *)(lVar2 + 0x18) = param_5;
    uVar1 = FUN_0041dc70(lVar2,param_4);
    return uVar1;
  }
  return 1;
}

