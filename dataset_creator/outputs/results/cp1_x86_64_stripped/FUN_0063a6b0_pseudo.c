
ulong FUN_0063a6b0(long *param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  bool bVar4;
  
  uVar2 = *(ulong *)(*param_1 + -0x18);
  if (param_4 <= uVar2) {
    uVar2 = uVar2 - param_4;
    if (uVar2 <= param_3) {
      param_3 = uVar2;
    }
    lVar3 = *param_1 + param_3 * 4;
    do {
      if (param_4 == 0) {
        return param_3;
      }
      iVar1 = thunk_FUN_007565c0(lVar3,param_2,param_4);
      if (iVar1 == 0) {
        return param_3;
      }
      lVar3 = lVar3 + -4;
      bVar4 = param_3 != 0;
      param_3 = param_3 - 1;
    } while (bVar4);
  }
  return 0xffffffffffffffff;
}

