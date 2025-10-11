
undefined8 FUN_007193c0(undefined8 param_1,long param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  undefined1 *puVar3;
  ulong uVar4;
  
  lVar1 = FUN_00712950();
  if (param_2 == lVar1) {
    return 0x16;
  }
  uVar2 = thunk_FUN_007129d0(lVar1);
  if (param_3 != 0) {
    uVar4 = param_3 - 1;
    if (uVar2 < param_3 - 1) {
      uVar4 = uVar2;
    }
    puVar3 = (undefined1 *)thunk_FUN_00713820(param_2,lVar1,uVar4);
    *puVar3 = 0;
    if (uVar2 < param_3) {
      return 0;
    }
  }
  return 0x22;
}

