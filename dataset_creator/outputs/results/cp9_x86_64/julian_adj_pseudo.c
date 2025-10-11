
bool julian_adj(int *param_1,int param_2,long param_3,long *param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  lVar3 = param_3 / 0x15180 + (long)param_2;
  iVar2 = param_1[2] * 0xe10 + param_1[1] * 0x3c + *param_1 +
          (int)(param_3 / 0x15180) * -0x15180 + (int)param_3;
  if (iVar2 < 0x15180) {
    if (iVar2 < 0) {
      lVar3 = lVar3 + -1;
      iVar2 = iVar2 + 0x15180;
    }
  }
  else {
    lVar3 = lVar3 + 1;
    iVar2 = iVar2 + -0x15180;
  }
  iVar1 = (param_1[4] + -0xd) / 0xc;
  iVar4 = (param_1[5] + 0x1a2c + iVar1) * 0x5b5;
  iVar6 = iVar4 + 3;
  if (-1 < iVar4) {
    iVar6 = iVar4;
  }
  iVar4 = ((param_1[5] + 0x1a90 + iVar1) / 100) * 3;
  iVar5 = iVar4 + 3;
  if (-1 < iVar4) {
    iVar5 = iVar4;
  }
  lVar3 = (((((param_1[4] + -1 + iVar1 * -0xc) * 0x16f) / 0xc + (iVar6 >> 2)) - (iVar5 >> 2)) +
           param_1[3] + -0x7d4b) + lVar3;
  if (-1 < lVar3) {
    *param_4 = lVar3;
    *param_5 = iVar2;
  }
  return -1 < lVar3;
}

