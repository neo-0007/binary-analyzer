
int FUN_006194d0(long *param_1,int *param_2,int param_3)

{
  long lVar1;
  ulong uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  
  iVar3 = FUN_004b7d40();
  if (iVar3 == 0) {
    return 0;
  }
  iVar3 = (int)param_1[1] + -1;
  if (iVar3 < 0) {
    iVar3 = 1;
    iVar5 = 0;
  }
  else {
    lVar7 = (long)iVar3;
    lVar1 = *param_1;
    iVar5 = 0;
    iVar3 = iVar3 * 0x40 + -1;
    do {
      while (uVar2 = *(ulong *)(lVar1 + lVar7 * 8), uVar2 == 0) {
        lVar7 = lVar7 + -1;
        iVar3 = iVar3 + -0x40;
        if ((int)lVar7 < 0) goto LAB_00619562;
      }
      uVar6 = 0x8000000000000000;
      iVar4 = iVar3 + 0x40;
      do {
        if ((uVar2 & uVar6) != 0) {
          if (iVar5 < param_3) {
            param_2[iVar5] = iVar4;
          }
          iVar5 = iVar5 + 1;
        }
        iVar4 = iVar4 + -1;
        uVar6 = uVar6 >> 1;
      } while (iVar4 != iVar3);
      lVar7 = lVar7 + -1;
      iVar3 = iVar3 + -0x40;
    } while (-1 < (int)lVar7);
LAB_00619562:
    if (iVar5 == 0) {
      iVar3 = 1;
    }
    else {
      iVar3 = iVar5 + 1;
      if (0x295 < *param_2) {
        return 0;
      }
    }
  }
  if (iVar5 < param_3) {
    param_2[iVar5] = -1;
  }
  return iVar3;
}

