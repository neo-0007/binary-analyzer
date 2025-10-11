
ulong FUN_0063a780(long *param_1,int param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  bool bVar4;
  
  uVar2 = 0xffffffffffffffff;
  lVar1 = *(long *)(*param_1 + -0x18);
  if (lVar1 != 0) {
    uVar3 = lVar1 - 1;
    uVar2 = param_3;
    if (uVar3 <= param_3) {
      uVar2 = uVar3;
    }
    do {
      if (*(int *)(*param_1 + uVar2 * 4) == param_2) {
        return uVar2;
      }
      bVar4 = uVar2 != 0;
      uVar2 = uVar2 - 1;
    } while (bVar4);
  }
  return uVar2;
}

