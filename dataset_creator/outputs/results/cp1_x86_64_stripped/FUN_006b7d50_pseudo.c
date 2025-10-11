
ulong FUN_006b7d50(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar3 = param_1[1];
  uVar2 = param_2[1];
  uVar1 = uVar3;
  if (uVar2 <= uVar3) {
    uVar1 = uVar2;
  }
  if ((uVar1 != 0) && (uVar1 = thunk_FUN_007565c0(*param_1,*param_2), (int)uVar1 != 0)) {
    return uVar1;
  }
  uVar3 = uVar3 - uVar2;
  uVar2 = 0x7fffffff;
  if (((long)uVar3 < 0x80000000) && (uVar2 = 0x80000000, -0x80000001 < (long)uVar3)) {
    uVar2 = uVar3 & 0xffffffff;
  }
  return uVar2;
}

