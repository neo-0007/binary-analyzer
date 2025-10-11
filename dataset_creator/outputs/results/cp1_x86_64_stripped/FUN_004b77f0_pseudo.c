
int FUN_004b77f0(long *param_1,long *param_2)

{
  ulong uVar1;
  ulong uVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  
  iVar5 = (int)param_1[1] - (int)param_2[1];
  if (iVar5 == 0) {
    iVar3 = (int)param_1[1] + -1;
    if (-1 < iVar3) {
      lVar4 = (long)iVar3;
      do {
        uVar1 = *(ulong *)(*param_1 + lVar4 * 8);
        uVar2 = *(ulong *)(*param_2 + lVar4 * 8);
        if (uVar1 != uVar2) {
          return (-(uint)(uVar2 < uVar1) & 2) - 1;
        }
        lVar4 = lVar4 + -1;
      } while (-1 < (int)lVar4);
    }
  }
  return iVar5;
}

