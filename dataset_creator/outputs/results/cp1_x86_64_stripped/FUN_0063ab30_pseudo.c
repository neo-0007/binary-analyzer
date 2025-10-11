
ulong FUN_0063ab30(long *param_1,long *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar3 = *(ulong *)(*param_1 + -0x18);
  uVar2 = *(ulong *)(*param_2 + -0x18);
  uVar1 = uVar3;
  if (uVar2 <= uVar3) {
    uVar1 = uVar2;
  }
  if ((uVar1 != 0) && (uVar1 = thunk_FUN_007565c0(), (int)uVar1 != 0)) {
    return uVar1;
  }
  uVar3 = uVar3 - uVar2;
  uVar2 = 0x7fffffff;
  if (((long)uVar3 < 0x80000000) && (uVar2 = 0x80000000, -0x80000001 < (long)uVar3)) {
    uVar2 = uVar3 & 0xffffffff;
  }
  return uVar2;
}

