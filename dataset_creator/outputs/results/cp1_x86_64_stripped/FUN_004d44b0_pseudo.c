
uint FUN_004d44b0(long param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  
  if (*(long *)(param_1 + 8) == 0) {
    return 0;
  }
  if (*(long *)(param_1 + 0x18) == 0) {
    return 0;
  }
  if (*(long *)(param_1 + 0x78) == 0) {
    return 0;
  }
  if (*(long *)(param_1 + 0x70) != 0) {
    lVar3 = FUN_004b2a70(*(undefined8 *)(param_1 + 0xb0));
    if ((lVar3 == 0) || (lVar4 = FUN_004b7690(), lVar4 == 0)) {
      lVar4 = 0;
      uVar1 = 0;
    }
    else {
      uVar1 = FUN_004d5380(lVar3,param_1,*(undefined8 *)(param_1 + 0x78),lVar4);
      if (uVar1 != 0) {
        iVar2 = FUN_004b7840(lVar4,*(undefined8 *)(param_1 + 0x70));
        uVar1 = (uint)(iVar2 == 0);
      }
    }
    FUN_004b7fa0(lVar4);
    FUN_004b2b50(lVar3);
    return uVar1;
  }
  return 0;
}

