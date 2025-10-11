
uint FUN_0041f510(long param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  
  lVar1 = *(long *)(param_1 + 0x58);
  iVar2 = FUN_00436480(*(undefined8 *)(lVar1 + 0x10));
  if (0 < iVar2) {
    uVar7 = 1;
    iVar5 = 0;
    do {
      iVar6 = iVar5 + 1;
      lVar4 = FUN_004364a0(*(undefined8 *)(lVar1 + 0x10),iVar5);
      uVar3 = (**(code **)(lVar4 + 8))(param_1,*(undefined8 *)(lVar4 + 0x20));
      uVar7 = uVar7 & uVar3;
      iVar5 = iVar6;
    } while (iVar6 != iVar2);
    return uVar7;
  }
  return 1;
}

