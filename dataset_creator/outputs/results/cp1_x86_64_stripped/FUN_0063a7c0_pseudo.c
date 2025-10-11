
ulong FUN_0063a7c0(long *param_1,undefined8 param_2,ulong param_3,long param_4)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  
  if (param_4 == 0) {
    return 0xffffffffffffffff;
  }
  lVar1 = *param_1;
  uVar2 = *(ulong *)(lVar1 + -0x18);
  while( true ) {
    if (uVar2 <= param_3) {
      return 0xffffffffffffffff;
    }
    lVar3 = thunk_FUN_00756540(param_2,*(undefined4 *)(lVar1 + param_3 * 4),param_4);
    if (lVar3 != 0) break;
    param_3 = param_3 + 1;
  }
  return param_3;
}

