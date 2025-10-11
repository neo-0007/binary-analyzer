
uint FUN_004b7840(long *param_1,long *param_2)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  uint uVar5;
  long lVar6;
  uint uVar7;
  
  if ((param_1 == (long *)0x0) || (param_2 == (long *)0x0)) {
    uVar5 = 0xffffffff;
    if (param_1 == (long *)0x0) {
      return (uint)(param_2 != (long *)0x0);
    }
  }
  else {
    iVar1 = (int)param_1[2];
    if (iVar1 != (int)param_2[2]) {
      return (-(uint)(iVar1 == 0) & 2) - 1;
    }
    iVar2 = (int)param_1[1];
    uVar7 = -(uint)(iVar1 == 0) | 1;
    uVar5 = (-(uint)(iVar1 == 0) & 2) - 1;
    if (iVar2 <= (int)param_2[1]) {
      if (iVar2 < (int)param_2[1]) {
        return uVar7;
      }
      if (-1 < iVar2 + -1) {
        lVar6 = (long)(iVar2 + -1);
        do {
          uVar3 = *(ulong *)(*param_2 + lVar6 * 8);
          uVar4 = *(ulong *)(*param_1 + lVar6 * 8);
          if (uVar3 < uVar4) {
            return uVar5;
          }
          if (uVar4 < uVar3) {
            return uVar7;
          }
          lVar6 = lVar6 + -1;
        } while (-1 < (int)lVar6);
      }
      return 0;
    }
  }
  return uVar5;
}

