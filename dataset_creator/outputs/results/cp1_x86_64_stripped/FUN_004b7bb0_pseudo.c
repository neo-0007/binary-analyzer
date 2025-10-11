
uint FUN_004b7bb0(long *param_1)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  long lVar9;
  
  uVar3 = *(uint *)(param_1 + 1);
  uVar2 = uVar3 - 1;
  if ((*(uint *)((long)param_1 + 0x14) & 4) == 0) {
    iVar4 = FUN_004b7ba0();
    uVar8 = 0;
    if (iVar4 == 0) {
      iVar4 = FUN_004b75b0(*(undefined8 *)(*param_1 + (long)(int)uVar2 * 8));
      uVar8 = uVar2 * 0x40 + iVar4;
    }
  }
  else if (*(int *)((long)param_1 + 0xc) < 1) {
    uVar8 = 0;
  }
  else {
    lVar9 = 0;
    uVar8 = 0;
    uVar7 = 0;
    do {
      uVar5 = uVar2 ^ (uint)lVar9;
      uVar6 = (int)(~uVar5 & uVar5 - 1) >> 0x1f;
      lVar1 = lVar9 * 8;
      uVar7 = uVar7 | uVar6;
      lVar9 = lVar9 + 1;
      uVar5 = FUN_004b75b0(*(undefined8 *)(*param_1 + lVar1));
      uVar8 = (~uVar7 & 0x40) + (uVar5 & uVar6) + uVar8;
    } while ((int)lVar9 < *(int *)((long)param_1 + 0xc));
    uVar8 = uVar8 & ~((int)(~uVar3 & uVar2) >> 0x1f);
  }
  return uVar8;
}

