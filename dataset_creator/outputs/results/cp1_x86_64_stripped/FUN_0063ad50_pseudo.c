
ulong FUN_0063ad50(long *param_1,ulong param_2,ulong param_3,undefined8 param_4)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  lVar1 = *param_1;
  uVar3 = *(ulong *)(lVar1 + -0x18);
  if (uVar3 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_0066ea20("%s: __pos (which is %zu) > this->size() (which is %zu)","basic_string::compare",
                 param_2,uVar3);
  }
  uVar4 = uVar3 - param_2;
  if (param_3 < uVar3 - param_2) {
    uVar4 = param_3;
  }
  uVar2 = thunk_FUN_007564d0(param_4);
  uVar3 = uVar4;
  if (uVar2 <= uVar4) {
    uVar3 = uVar2;
  }
  if ((uVar3 != 0) && (uVar3 = thunk_FUN_007565c0(lVar1 + param_2 * 4,param_4), (int)uVar3 != 0)) {
    return uVar3;
  }
  uVar4 = uVar4 - uVar2;
  uVar3 = 0x7fffffff;
  if (((long)uVar4 < 0x80000000) && (uVar3 = 0x80000000, -0x80000001 < (long)uVar4)) {
    uVar3 = uVar4 & 0xffffffff;
  }
  return uVar3;
}

