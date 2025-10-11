
int FUN_0075216a(int *param_1,int *param_2,ulong param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  
  for (; 3 < param_3; param_3 = param_3 - 4) {
    iVar1 = *param_2;
    iVar2 = *param_1;
    bVar5 = SBORROW4(iVar2,iVar1);
    bVar4 = iVar2 - iVar1 < 0;
    bVar3 = iVar2 == iVar1;
    if (!bVar3) goto LAB_007521a0;
    iVar1 = param_2[1];
    iVar2 = param_1[1];
    bVar5 = SBORROW4(iVar2,iVar1);
    bVar4 = iVar2 - iVar1 < 0;
    bVar3 = iVar2 == iVar1;
    if (!bVar3) goto LAB_007521a0;
    iVar1 = param_2[2];
    iVar2 = param_1[2];
    bVar5 = SBORROW4(iVar2,iVar1);
    bVar4 = iVar2 - iVar1 < 0;
    bVar3 = iVar2 == iVar1;
    if (!bVar3) goto LAB_007521a0;
    iVar1 = param_2[3];
    iVar2 = param_1[3];
    bVar5 = SBORROW4(iVar2,iVar1);
    bVar4 = iVar2 - iVar1 < 0;
    bVar3 = iVar2 == iVar1;
    if (!bVar3) goto LAB_007521a0;
    param_1 = param_1 + 4;
    param_2 = param_2 + 4;
  }
  if (param_3 == 0) {
    return 0;
  }
  iVar1 = *param_2;
  iVar2 = *param_1;
  bVar5 = SBORROW4(iVar2,iVar1);
  bVar4 = iVar2 - iVar1 < 0;
  bVar3 = iVar2 == iVar1;
  if (bVar3) {
    if (param_3 == 1) {
      return 0;
    }
    iVar1 = param_2[1];
    iVar2 = param_1[1];
    bVar5 = SBORROW4(iVar2,iVar1);
    bVar4 = iVar2 - iVar1 < 0;
    bVar3 = iVar2 == iVar1;
    if (bVar3) {
      if (param_3 == 2) {
        return 0;
      }
      iVar1 = param_2[2];
      iVar2 = param_1[2];
      bVar5 = SBORROW4(iVar2,iVar1);
      bVar4 = iVar2 - iVar1 < 0;
      bVar3 = iVar2 == iVar1;
      if (bVar3) {
        return 0;
      }
    }
  }
LAB_007521a0:
  bVar3 = !bVar3 && bVar5 == bVar4;
  return (bVar3 - 1) + (uint)bVar3;
}

