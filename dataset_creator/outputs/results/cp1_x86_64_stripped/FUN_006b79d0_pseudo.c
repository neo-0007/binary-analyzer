
ulong FUN_006b79d0(long *param_1,undefined8 param_2,ulong param_3,long param_4)

{
  ulong uVar1;
  long lVar2;
  
  if (param_4 == 0) {
    return 0xffffffffffffffff;
  }
  uVar1 = param_1[1];
  while( true ) {
    if (uVar1 <= param_3) {
      return 0xffffffffffffffff;
    }
    lVar2 = thunk_FUN_00756540(param_2,*(undefined4 *)(*param_1 + param_3 * 4),param_4);
    if (lVar2 != 0) break;
    param_3 = param_3 + 1;
  }
  return param_3;
}

