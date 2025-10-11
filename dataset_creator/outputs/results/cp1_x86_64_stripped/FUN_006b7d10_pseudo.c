
ulong FUN_006b7d10(long *param_1,int param_2,ulong param_3)

{
  ulong uVar1;
  bool bVar2;
  
  uVar1 = 0xffffffffffffffff;
  if (param_1[1] != 0) {
    uVar1 = param_1[1] - 1;
    if (uVar1 <= param_3) {
      param_3 = uVar1;
    }
    do {
      if (*(int *)(*param_1 + param_3 * 4) != param_2) {
        return param_3;
      }
      bVar2 = param_3 != 0;
      uVar1 = param_3 - 1;
      param_3 = uVar1;
    } while (bVar2);
  }
  return uVar1;
}

