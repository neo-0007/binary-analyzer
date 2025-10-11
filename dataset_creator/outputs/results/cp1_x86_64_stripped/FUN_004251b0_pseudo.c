
ulong FUN_004251b0(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar3 = thunk_FUN_00712780(param_1[1],param_2[1]);
  if (((((int)uVar3 == 0) && (uVar1 = *param_1, uVar1 != 0)) && (uVar2 = *param_2, uVar2 != 0)) &&
     (uVar3 = (ulong)-(uint)(uVar2 < uVar1), uVar1 < uVar2)) {
    uVar3 = 1;
  }
  return uVar3;
}

