
undefined8 FUN_004bbff0(long *param_1,long *param_2)

{
  long lVar1;
  ulong uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  
  iVar3 = FUN_004b7ba0(param_2);
  if (iVar3 != 0) {
    FUN_004b7b50(param_1);
    return 1;
  }
  iVar3 = (int)param_2[1];
  lVar1 = *param_2;
  if (param_2 != param_1) {
    lVar5 = FUN_004b8240(param_1,iVar3);
    if (lVar5 == 0) {
      return 0;
    }
    *(int *)(param_1 + 2) = (int)param_2[2];
  }
  iVar4 = iVar3 + -1;
  lVar5 = *param_1;
  lVar6 = (long)iVar4;
  uVar2 = *(ulong *)(lVar1 + lVar6 * 8);
  *(ulong *)(lVar5 + lVar6 * 8) = uVar2 >> 1;
  iVar3 = iVar3 - (uint)(uVar2 == 1);
  *(int *)(param_1 + 1) = iVar3;
  while (0 < iVar4) {
    uVar7 = uVar2 << 0x3f;
    uVar2 = *(ulong *)(lVar1 + -8 + lVar6 * 8);
    *(ulong *)(lVar5 + -8 + lVar6 * 8) = uVar2 >> 1 | uVar7;
    lVar6 = lVar6 + -1;
    iVar4 = (int)lVar6;
  }
  if (iVar3 == 0) {
    *(undefined4 *)(param_1 + 2) = 0;
  }
  return 1;
}

