
int bn_cmp_words(long param_1,long param_2,int param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  if (param_3 != 0) {
    uVar1 = *(ulong *)(param_1 + -8 + (long)param_3 * 8);
    uVar2 = *(ulong *)(param_2 + -8 + (long)param_3 * 8);
    if (uVar1 != uVar2) {
      return (-(uint)(uVar2 < uVar1) & 2) - 1;
    }
    if (-1 < param_3 + -2) {
      lVar3 = (long)(param_3 + -2);
      do {
        uVar1 = *(ulong *)(param_1 + lVar3 * 8);
        uVar2 = *(ulong *)(param_2 + lVar3 * 8);
        if (uVar1 != uVar2) {
          return (-(uint)(uVar2 < uVar1) & 2) - 1;
        }
        lVar3 = lVar3 + -1;
      } while (-1 < (int)lVar3);
    }
  }
  return 0;
}

