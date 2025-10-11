
ulong FUN_006a0270(long *param_1,char param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  bool bVar3;
  
  uVar1 = 0xffffffffffffffff;
  if (param_1[1] != 0) {
    uVar2 = param_1[1] - 1;
    uVar1 = param_3;
    if (uVar2 <= param_3) {
      uVar1 = uVar2;
    }
    do {
      if (*(char *)(*param_1 + uVar1) == param_2) {
        return uVar1;
      }
      bVar3 = uVar1 != 0;
      uVar1 = uVar1 - 1;
    } while (bVar3);
  }
  return uVar1;
}

