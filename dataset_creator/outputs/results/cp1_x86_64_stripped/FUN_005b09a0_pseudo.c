
undefined8 FUN_005b09a0(long param_1,long param_2,ulong param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  if (param_2 != 0) {
    if (param_1 == 0) {
      return 0;
    }
    lVar3 = *(long *)(param_1 + 0x150);
    if (lVar3 == 0) {
      lVar3 = FUN_005b0940();
      param_3 = param_3 & 0xffffffff;
      *(long *)(param_1 + 0x150) = lVar3;
      if (lVar3 == 0) {
        return 0;
      }
    }
    lVar2 = *(long *)(lVar3 + 0x10);
    if (lVar2 == 0) {
      lVar2 = FUN_004a78b0();
      param_3 = param_3 & 0xffffffff;
      *(long *)(lVar3 + 0x10) = lVar2;
      if (lVar2 == 0) {
        return 0;
      }
    }
    uVar1 = FUN_004a1fa0(lVar2,param_2,param_3);
    return uVar1;
  }
  if ((param_1 != 0) && (*(long *)(param_1 + 0x150) != 0)) {
    if (*(long *)(*(long *)(param_1 + 0x150) + 0x10) != 0) {
      thunk_FUN_004a2270();
      *(undefined8 *)(*(long *)(param_1 + 0x150) + 0x10) = 0;
      return 1;
    }
    return 1;
  }
  return 1;
}

