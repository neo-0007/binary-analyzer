
ulong FUN_006a0450(long *param_1,undefined8 param_2,ulong param_3,long param_4)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  uVar1 = param_1[1];
  if (param_3 < uVar1) {
    lVar2 = *param_1;
    if (param_4 == 0) {
      return param_3;
    }
    do {
      lVar3 = thunk_FUN_007134f0(param_2,(int)*(char *)(lVar2 + param_3),param_4);
      if (lVar3 == 0) {
        return param_3;
      }
      param_3 = param_3 + 1;
    } while (param_3 != uVar1);
  }
  return 0xffffffffffffffff;
}

