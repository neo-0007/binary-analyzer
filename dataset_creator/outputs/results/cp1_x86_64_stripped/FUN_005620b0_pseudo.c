
undefined8 FUN_005620b0(long *param_1,long param_2)

{
  int iVar1;
  long lVar2;
  
  iVar1 = FUN_00423da0(*(undefined8 *)(param_2 + 0x18));
  if (iVar1 == 0x17) {
    lVar2 = *(long *)(*(long *)(*(long *)(param_2 + 0x20) + 0x10) + 0x10);
    if (lVar2 != 0) goto LAB_005620f6;
    lVar2 = FUN_004a7670();
    *(long *)(*(long *)(*(long *)(param_2 + 0x20) + 0x10) + 0x10) = lVar2;
  }
  else if (iVar1 < 0x18) {
    if (iVar1 == 0x15) {
      lVar2 = *(long *)(param_2 + 0x20);
    }
    else {
      if (iVar1 != 0x16) {
        return 0;
      }
      lVar2 = *(long *)(*(long *)(*(long *)(param_2 + 0x20) + 0x28) + 0x20);
    }
  }
  else {
    if (iVar1 != 0x18) {
      return 0;
    }
    lVar2 = *(long *)(*(long *)(*(long *)(param_2 + 0x20) + 0x28) + 0x10);
    if (lVar2 != 0) goto LAB_005620f6;
    lVar2 = FUN_004a7670();
    *(long *)(*(long *)(*(long *)(param_2 + 0x20) + 0x28) + 0x10) = lVar2;
  }
  if (lVar2 == 0) {
    return 0;
  }
LAB_005620f6:
  *(ulong *)(lVar2 + 0x10) = *(ulong *)(lVar2 + 0x10) | 0x10;
  *param_1 = lVar2 + 8;
  return 1;
}

