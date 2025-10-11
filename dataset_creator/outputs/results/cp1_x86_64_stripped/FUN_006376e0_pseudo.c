
ulong FUN_006376e0(long *param_1,char param_2,ulong param_3)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(*param_1 + -0x18);
  if (param_3 < uVar1) {
    do {
      if (*(char *)(*param_1 + param_3) != param_2) {
        return param_3;
      }
      param_3 = param_3 + 1;
    } while (param_3 != uVar1);
  }
  return 0xffffffffffffffff;
}

