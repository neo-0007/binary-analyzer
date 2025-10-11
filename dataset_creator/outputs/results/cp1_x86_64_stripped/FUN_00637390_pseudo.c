
ulong FUN_00637390(long *param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  bool bVar4;
  
  lVar1 = *param_1;
  uVar3 = *(ulong *)(lVar1 + -0x18);
  if (param_4 <= uVar3) {
    uVar3 = uVar3 - param_4;
    if (uVar3 <= param_3) {
      param_3 = uVar3;
    }
    do {
      if (param_4 == 0) {
        return param_3;
      }
      iVar2 = thunk_FUN_00713570(lVar1 + param_3,param_2,param_4);
      if (iVar2 == 0) {
        return param_3;
      }
      bVar4 = param_3 != 0;
      param_3 = param_3 - 1;
    } while (bVar4);
  }
  return 0xffffffffffffffff;
}

