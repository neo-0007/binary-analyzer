
ulong FUN_00637630(long *param_1,undefined8 param_2,ulong param_3,long param_4)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  
  lVar1 = *param_1;
  uVar2 = *(ulong *)(lVar1 + -0x18);
  if (param_3 < uVar2) {
    if (param_4 == 0) {
      return param_3;
    }
    do {
      lVar3 = thunk_FUN_007134f0(param_2,(int)*(char *)(lVar1 + param_3),param_4);
      if (lVar3 == 0) {
        return param_3;
      }
      param_3 = param_3 + 1;
    } while (param_3 != uVar2);
  }
  return 0xffffffffffffffff;
}

