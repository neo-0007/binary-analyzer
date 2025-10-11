
ulong FUN_0063aa40(long *param_1,undefined8 param_2,ulong param_3,long param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  bool bVar4;
  
  uVar3 = 0xffffffffffffffff;
  lVar1 = *param_1;
  lVar2 = *(long *)(lVar1 + -0x18);
  if (lVar2 != 0) {
    uVar3 = lVar2 - 1;
    if (uVar3 <= param_3) {
      param_3 = uVar3;
    }
    do {
      if (param_4 == 0) {
        return param_3;
      }
      lVar2 = thunk_FUN_00756540(param_2,*(undefined4 *)(lVar1 + param_3 * 4),param_4);
      if (lVar2 == 0) {
        return param_3;
      }
      bVar4 = param_3 != 0;
      uVar3 = param_3 - 1;
      param_3 = uVar3;
    } while (bVar4);
  }
  return uVar3;
}

