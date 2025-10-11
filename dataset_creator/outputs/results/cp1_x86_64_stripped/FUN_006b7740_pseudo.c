
ulong FUN_006b7740(long *param_1,undefined4 *param_2,ulong param_3,ulong param_4)

{
  undefined4 uVar1;
  ulong uVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  
  uVar2 = param_1[1];
  if (param_4 == 0) {
    uVar6 = 0xffffffffffffffff;
    if (param_3 <= uVar2) {
      uVar6 = param_3;
    }
    return uVar6;
  }
  if (param_3 < uVar2) {
    lVar3 = *param_1;
    lVar5 = lVar3 + param_3 * 4;
    if ((param_4 <= uVar2 - param_3) && ((uVar2 - param_3) + (1 - param_4) != 0)) {
      uVar1 = *param_2;
      while (lVar5 = thunk_FUN_00756540(lVar5,uVar1), lVar5 != 0) {
        iVar4 = thunk_FUN_007565c0(lVar5,param_2,param_4);
        if (iVar4 == 0) {
          return lVar5 - lVar3 >> 2;
        }
        lVar5 = lVar5 + 4;
        uVar6 = (long)((lVar3 + uVar2 * 4) - lVar5) >> 2;
        if (uVar6 < param_4) {
          return 0xffffffffffffffff;
        }
        if (uVar6 + (1 - param_4) == 0) {
          return 0xffffffffffffffff;
        }
      }
    }
  }
  return 0xffffffffffffffff;
}

