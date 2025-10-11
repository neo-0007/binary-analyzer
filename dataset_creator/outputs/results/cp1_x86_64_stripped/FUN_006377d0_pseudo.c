
ulong FUN_006377d0(long *param_1,char param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  bool bVar3;
  
  uVar2 = 0xffffffffffffffff;
  lVar1 = *(long *)(*param_1 + -0x18);
  if (lVar1 != 0) {
    uVar2 = lVar1 - 1;
    if (uVar2 <= param_3) {
      param_3 = uVar2;
    }
    do {
      if (*(char *)(*param_1 + param_3) != param_2) {
        return param_3;
      }
      bVar3 = param_3 != 0;
      uVar2 = param_3 - 1;
      param_3 = uVar2;
    } while (bVar3);
  }
  return uVar2;
}

