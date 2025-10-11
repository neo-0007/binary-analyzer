
long FUN_0069ccd0(long *param_1,int *param_2,long param_3)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  if (param_3 < 1) {
    return 0;
  }
  lVar6 = 0;
  do {
    lVar5 = param_1[2];
    if (param_1[3] != lVar5) {
      lVar3 = param_1[3] - lVar5 >> 2;
      lVar4 = param_3 - lVar6;
      if (lVar3 <= param_3 - lVar6) {
        lVar4 = lVar3;
      }
      if (lVar4 != 0) {
        FUN_00771ea0(param_2,lVar5,lVar4,0x3fffffffffffffff);
        lVar5 = param_1[2];
      }
      lVar6 = lVar6 + lVar4;
      param_1[2] = lVar5 + lVar4 * 4;
      if (param_3 <= lVar6) {
        return lVar6;
      }
      param_2 = param_2 + lVar4;
    }
    pcVar1 = *(code **)(*param_1 + 0x50);
    if (pcVar1 == FUN_0069cba0) {
      pcVar1 = *(code **)(*param_1 + 0x48);
      if (pcVar1 == FUN_0069c9e0) {
        return lVar6;
      }
      iVar2 = (*pcVar1)(param_1);
      if (iVar2 == -1) {
        return lVar6;
      }
      iVar2 = *(int *)param_1[2];
      param_1[2] = (long)((int *)param_1[2] + 1);
    }
    else {
      iVar2 = (*pcVar1)(param_1);
    }
    if (iVar2 == -1) {
      return lVar6;
    }
    lVar6 = lVar6 + 1;
    *param_2 = iVar2;
    param_2 = param_2 + 1;
  } while (lVar6 < param_3);
  return lVar6;
}

