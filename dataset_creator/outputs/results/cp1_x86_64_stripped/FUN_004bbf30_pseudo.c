
undefined8 FUN_004bbf30(long *param_1,long *param_2)

{
  int iVar1;
  ulong uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong *puVar8;
  int iVar9;
  
  if (param_1 == param_2) {
    lVar4 = FUN_004b8240();
    if (lVar4 == 0) {
      return 0;
    }
    iVar9 = (int)param_1[1];
  }
  else {
    *(int *)(param_1 + 2) = (int)param_2[2];
    lVar4 = FUN_004b8240();
    if (lVar4 == 0) {
      return 0;
    }
    iVar9 = (int)param_2[1];
    *(int *)(param_1 + 1) = iVar9;
  }
  iVar1 = (int)param_2[1];
  lVar4 = *param_2;
  puVar8 = (ulong *)*param_1;
  if (iVar1 < 1) {
    uVar3 = 0;
    uVar6 = 0;
  }
  else {
    lVar5 = 0;
    uVar7 = 0;
    do {
      uVar2 = *(ulong *)(lVar4 + lVar5 * 8);
      uVar6 = uVar2 >> 0x3f;
      puVar8[lVar5] = uVar2 * 2 | uVar7;
      lVar5 = lVar5 + 1;
      uVar7 = uVar6;
    } while (iVar1 != lVar5);
    puVar8 = puVar8 + iVar1;
    uVar3 = (uint)(uVar2 >> 0x3f);
  }
  *puVar8 = uVar6;
  *(uint *)(param_1 + 1) = iVar9 + uVar3;
  return 1;
}

