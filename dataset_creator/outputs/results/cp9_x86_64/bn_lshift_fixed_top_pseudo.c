
undefined8 bn_lshift_fixed_top(undefined8 *param_1,long *param_2,uint param_3)

{
  long *plVar1;
  void *__s;
  long lVar2;
  ulong uVar3;
  sbyte sVar4;
  sbyte sVar5;
  long lVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  uint uVar10;
  int iVar11;
  
  uVar10 = param_3 + 0x3f;
  if (-1 < (int)param_3) {
    uVar10 = param_3;
  }
  iVar7 = (int)uVar10 >> 6;
  lVar2 = bn_wexpand();
  if (lVar2 != 0) {
    __s = (void *)*param_1;
    iVar11 = (int)param_2[1];
    lVar2 = 0;
    plVar1 = (long *)((long)__s + (long)iVar7 * 8);
    if (iVar11 != 0) {
      lVar2 = *param_2;
      uVar9 = *(ulong *)(lVar2 + -8 + (long)iVar11 * 8);
      uVar10 = -(param_3 & 0x3f) & 0x3f;
      uVar3 = -(ulong)uVar10;
      uVar3 = uVar3 >> 8 | uVar3;
      sVar4 = (sbyte)uVar10;
      plVar1[iVar11] = uVar9 >> sVar4 & uVar3;
      sVar5 = (sbyte)(param_3 & 0x3f);
      if (0 < iVar11 + -1) {
        lVar6 = (long)(iVar11 + -1);
        uVar8 = uVar9;
        do {
          uVar9 = *(ulong *)(lVar2 + -8 + lVar6 * 8);
          plVar1[lVar6] = uVar8 << sVar5 | uVar9 >> sVar4 & uVar3;
          lVar6 = lVar6 + -1;
          uVar8 = uVar9;
        } while (0 < (int)lVar6);
      }
      lVar2 = uVar9 << sVar5;
    }
    *plVar1 = lVar2;
    if (iVar7 != 0) {
      memset(__s,0,(long)iVar7 * 8);
      iVar11 = (int)param_2[1];
    }
    *(int *)(param_1 + 2) = (int)param_2[2];
    *(int *)(param_1 + 1) = iVar11 + 1 + iVar7;
    return 1;
  }
  return 0;
}

