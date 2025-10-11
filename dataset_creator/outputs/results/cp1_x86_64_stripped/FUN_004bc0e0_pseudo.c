
undefined8 FUN_004bc0e0(long *param_1,long *param_2,uint param_3)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  sbyte sVar4;
  sbyte sVar5;
  long lVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  uint uVar11;
  int iVar12;
  
  uVar11 = param_3 + 0x3f;
  if (-1 < (int)param_3) {
    uVar11 = param_3;
  }
  iVar7 = (int)uVar11 >> 6;
  lVar2 = FUN_004b8240();
  if (lVar2 != 0) {
    lVar2 = *param_1;
    iVar12 = (int)param_2[1];
    lVar10 = 0;
    plVar1 = (long *)(lVar2 + (long)iVar7 * 8);
    if (iVar12 != 0) {
      lVar10 = *param_2;
      uVar9 = *(ulong *)(lVar10 + -8 + (long)iVar12 * 8);
      uVar11 = -(param_3 & 0x3f) & 0x3f;
      uVar3 = -(ulong)uVar11;
      uVar3 = uVar3 >> 8 | uVar3;
      sVar4 = (sbyte)uVar11;
      plVar1[iVar12] = uVar9 >> sVar4 & uVar3;
      sVar5 = (sbyte)(param_3 & 0x3f);
      if (0 < iVar12 + -1) {
        lVar6 = (long)(iVar12 + -1);
        uVar8 = uVar9;
        do {
          uVar9 = *(ulong *)(lVar10 + -8 + lVar6 * 8);
          plVar1[lVar6] = uVar8 << sVar5 | uVar9 >> sVar4 & uVar3;
          lVar6 = lVar6 + -1;
          uVar8 = uVar9;
        } while (0 < (int)lVar6);
      }
      lVar10 = uVar9 << sVar5;
    }
    *plVar1 = lVar10;
    if (iVar7 != 0) {
      thunk_FUN_00713720(lVar2,0,(long)iVar7 * 8);
      iVar12 = (int)param_2[1];
    }
    *(int *)(param_1 + 2) = (int)param_2[2];
    *(int *)(param_1 + 1) = iVar12 + 1 + iVar7;
    return 1;
  }
  return 0;
}

