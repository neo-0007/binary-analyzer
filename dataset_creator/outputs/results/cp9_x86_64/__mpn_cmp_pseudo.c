
int __mpn_cmp(long param_1,long param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  bool bVar3;
  
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    do {
      uVar1 = *(ulong *)(param_1 + param_3 * 8);
      uVar2 = *(ulong *)(param_2 + param_3 * 8);
      if (uVar1 != uVar2) {
        return (-(uint)(uVar2 < uVar1) & 2) - 1;
      }
      bVar3 = param_3 != 0;
      param_3 = param_3 + -1;
    } while (bVar3);
  }
  return 0;
}

