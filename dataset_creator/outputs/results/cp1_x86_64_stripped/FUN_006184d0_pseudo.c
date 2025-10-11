
undefined8 FUN_006184d0(long *param_1,long *param_2,long *param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  long *plVar7;
  long *plVar8;
  
  plVar7 = param_2;
  plVar8 = param_3;
  iVar6 = (int)param_2[1];
  if ((int)param_2[1] < (int)param_3[1]) {
    plVar7 = param_3;
    plVar8 = param_2;
    iVar6 = (int)param_3[1];
  }
  lVar3 = FUN_004b8240(param_1,iVar6);
  if (lVar3 != 0) {
    iVar6 = (int)plVar8[1];
    if (iVar6 < 1) {
      iVar6 = 0;
    }
    else {
      lVar3 = *plVar7;
      lVar2 = *plVar8;
      lVar4 = 0;
      lVar5 = *param_1;
      do {
        *(ulong *)(lVar5 + lVar4 * 8) =
             *(ulong *)(lVar3 + lVar4 * 8) ^ *(ulong *)(lVar2 + lVar4 * 8);
        lVar4 = lVar4 + 1;
      } while (iVar6 != lVar4);
    }
    iVar1 = (int)plVar7[1];
    if (iVar6 < iVar1) {
      lVar3 = *plVar7;
      lVar2 = *param_1;
      lVar5 = (long)iVar6;
      do {
        *(undefined8 *)(lVar2 + lVar5 * 8) = *(undefined8 *)(lVar3 + lVar5 * 8);
        lVar5 = lVar5 + 1;
      } while ((int)lVar5 < iVar1);
    }
    *(int *)(param_1 + 1) = iVar1;
    FUN_004b8490(param_1);
    return 1;
  }
  return 0;
}

