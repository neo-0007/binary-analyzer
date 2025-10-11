
undefined8 bn_rshift_fixed_top(long *param_1,long *param_2,uint param_3)

{
  ulong *puVar1;
  ulong uVar2;
  long lVar3;
  sbyte sVar4;
  int iVar5;
  ulong *puVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  int iVar10;
  
  uVar7 = param_3 + 0x3f;
  if (-1 < (int)param_3) {
    uVar7 = param_3;
  }
  iVar5 = (int)uVar7 >> 6;
  if (iVar5 < (int)param_2[1]) {
    iVar10 = (int)param_2[1] - iVar5;
    uVar7 = -(param_3 & 0x3f) & 0x3f;
    uVar2 = -(ulong)uVar7;
    if ((param_2 != param_1) && (lVar3 = bn_wexpand(param_1,iVar10), lVar3 == 0)) {
      return 0;
    }
    puVar6 = (ulong *)*param_1;
    puVar1 = (ulong *)(*param_2 + (long)iVar5 * 8);
    uVar9 = *puVar1;
    sVar4 = (sbyte)(param_3 & 0x3f);
    if (0 < iVar10 + -1) {
      lVar3 = 1;
      uVar8 = uVar9;
      do {
        uVar9 = puVar1[lVar3];
        puVar6[lVar3 + -1] = uVar9 << (sbyte)uVar7 & (uVar2 >> 8 | uVar2) | uVar8 >> sVar4;
        lVar3 = lVar3 + 1;
        uVar8 = uVar9;
      } while ((ulong)(iVar10 - 2) + 2 != lVar3);
      puVar6 = puVar6 + (iVar10 + -1);
    }
    lVar3 = param_2[2];
    *puVar6 = uVar9 >> sVar4;
    *(int *)(param_1 + 1) = iVar10;
    *(int *)(param_1 + 2) = (int)lVar3;
    return 1;
  }
  BN_zero_ex();
  return 1;
}

