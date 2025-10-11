
ulong FUN_006b7f70(long *param_1,ulong param_2,ulong param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = param_1[1];
  if (uVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_0066ea20("%s: __pos (which is %zu) > this->size() (which is %zu)","basic_string::compare",
                 param_2,uVar2);
  }
  uVar3 = uVar2 - param_2;
  if (param_3 < uVar2 - param_2) {
    uVar3 = param_3;
  }
  uVar1 = thunk_FUN_007564d0(param_4);
  uVar2 = uVar3;
  if (uVar1 <= uVar3) {
    uVar2 = uVar1;
  }
  if ((uVar2 != 0) && (uVar2 = thunk_FUN_007565c0(*param_1 + param_2 * 4,param_4), (int)uVar2 != 0))
  {
    return uVar2;
  }
  uVar3 = uVar3 - uVar1;
  uVar2 = 0x7fffffff;
  if (((long)uVar3 < 0x80000000) && (uVar2 = 0x80000000, -0x80000001 < (long)uVar3)) {
    uVar2 = uVar3 & 0xffffffff;
  }
  return uVar2;
}

