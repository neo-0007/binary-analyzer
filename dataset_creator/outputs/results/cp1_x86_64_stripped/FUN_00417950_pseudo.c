
undefined4 FUN_00417950(undefined8 param_1,uint param_2,code *param_3)

{
  long lVar1;
  undefined8 uVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  
  lVar5 = FUN_004174a0();
  if ((lVar5 != 0) && (iVar3 = FUN_004222a0(*(undefined8 *)(lVar5 + 0x198)), iVar3 != 0)) {
    lVar1 = (ulong)param_2 + 0x68;
    if (*(int *)(lVar5 + 0x1a0 + (ulong)param_2 * 4) != 0) {
      uVar4 = *(undefined4 *)(lVar5 + 0xc + lVar1 * 4);
      FUN_004222e0(*(undefined8 *)(lVar5 + 0x198));
      return uVar4;
    }
    FUN_004222e0(*(undefined8 *)(lVar5 + 0x198));
    iVar3 = FUN_004222c0(*(undefined8 *)(lVar5 + 0x198));
    if (iVar3 != 0) {
      if (*(int *)(lVar5 + lVar1 * 4) != 0) {
        uVar4 = *(undefined4 *)(lVar5 + 0xc + lVar1 * 4);
        FUN_004222e0(*(undefined8 *)(lVar5 + 0x198));
        return uVar4;
      }
      uVar4 = (*param_3)(lVar5);
      *(undefined4 *)(lVar5 + lVar1 * 4) = 1;
      uVar2 = *(undefined8 *)(lVar5 + 0x198);
      *(undefined4 *)(lVar5 + 0xc + lVar1 * 4) = uVar4;
      FUN_004222e0(uVar2);
      return uVar4;
    }
  }
  return 0;
}

