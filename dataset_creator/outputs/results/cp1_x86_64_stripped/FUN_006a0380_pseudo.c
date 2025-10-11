
ulong FUN_006a0380(long *param_1,undefined8 param_2,ulong param_3,long param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  bool bVar4;
  
  if ((param_1[1] != 0) && (param_4 != 0)) {
    uVar3 = param_1[1] - 1;
    lVar1 = *param_1;
    if (param_3 < uVar3) {
      uVar3 = param_3;
    }
    do {
      lVar2 = thunk_FUN_007134f0(param_2,(int)*(char *)(lVar1 + uVar3),param_4);
      if (lVar2 != 0) {
        return uVar3;
      }
      bVar4 = uVar3 != 0;
      uVar3 = uVar3 - 1;
    } while (bVar4);
    return uVar3;
  }
  return 0xffffffffffffffff;
}

