
void FUN_00561650(long param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  lVar3 = FUN_00561260();
  uVar4 = FUN_005614d0(lVar3);
  uVar5 = FUN_005614f0(lVar3);
  if (lVar3 == 0) {
    return;
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    iVar1 = FUN_00423da0(*(undefined8 *)(param_1 + 0x18));
    if (iVar1 == 0x18) {
      uVar10 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30);
    }
    else {
      uVar10 = 0;
      iVar1 = FUN_00423da0(*(undefined8 *)(param_1 + 0x18));
      if (iVar1 == 0x17) {
        uVar10 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
      }
    }
    uVar6 = FUN_00561600(param_1);
    if ((*(long *)(param_1 + 0x20) == 0) ||
       ((iVar1 = FUN_00423da0(*(undefined8 *)(param_1 + 0x18)), iVar1 != 0x16 &&
        (iVar1 = FUN_00423da0(*(undefined8 *)(param_1 + 0x18)), iVar1 != 0x18)))) {
      uVar9 = 0;
    }
    else {
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
    }
    for (iVar1 = 0; iVar2 = FUN_00436480(uVar9), iVar1 < iVar2; iVar1 = iVar1 + 1) {
      uVar7 = FUN_004364a0(uVar9,iVar1);
      FUN_005b0240(uVar7,uVar4,uVar5);
    }
    for (iVar1 = 0; iVar2 = FUN_00436480(uVar10), iVar1 < iVar2; iVar1 = iVar1 + 1) {
      lVar8 = FUN_004364a0(uVar10,iVar1);
      FUN_005b0240(*(undefined8 *)(lVar8 + 0x20),uVar4,uVar5);
    }
    for (iVar1 = 0; iVar2 = FUN_00436480(uVar6), iVar1 < iVar2; iVar1 = iVar1 + 1) {
      lVar8 = FUN_004364a0(uVar6,iVar1);
      if (lVar8 != 0) {
        *(long *)(lVar8 + 0x40) = lVar3;
      }
    }
    return;
  }
  return;
}

