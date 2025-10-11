
undefined8 FUN_004b1610(long *param_1,long *param_2,long *param_3)

{
  int iVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  uint uVar10;
  ulong *puVar11;
  int iVar12;
  
  iVar3 = (int)param_2[1];
  iVar1 = (int)param_3[1];
  plVar9 = param_3;
  iVar12 = iVar1;
  if (iVar1 <= iVar3) {
    plVar9 = param_2;
    param_2 = param_3;
    iVar12 = iVar3;
    iVar3 = iVar1;
  }
  lVar4 = FUN_004b8240(param_1,iVar12 + 1);
  uVar6 = 0;
  if (lVar4 != 0) {
    *(int *)(param_1 + 1) = iVar12;
    lVar4 = *plVar9;
    lVar2 = *param_1;
    uVar10 = iVar12 - iVar3;
    uVar5 = FUN_005c1040(lVar2,lVar4,*param_2,iVar3);
    puVar11 = (ulong *)(lVar2 + (long)iVar3 * 8);
    if (uVar10 != 0) {
      uVar8 = 0;
      do {
        uVar7 = uVar5 + *(long *)(lVar4 + (long)iVar3 * 8 + uVar8 * 8);
        puVar11[uVar8] = uVar7;
        uVar8 = uVar8 + 1;
        uVar5 = uVar5 & uVar7 == 0;
      } while (uVar10 != uVar8);
      puVar11 = puVar11 + uVar10;
    }
    *puVar11 = uVar5;
    *(undefined4 *)(param_1 + 2) = 0;
    *(int *)(param_1 + 1) = (int)param_1[1] + (int)uVar5;
    uVar6 = 1;
  }
  return uVar6;
}

