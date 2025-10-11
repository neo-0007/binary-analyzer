
ulong FUN_005c94a0(long *param_1,long *param_2)

{
  ulong uVar1;
  
  if ((*param_1 != *param_2) && (uVar1 = thunk_FUN_00712780(), (int)uVar1 != 0)) {
    return uVar1;
  }
  if (param_1[1] == 0) {
    return (ulong)-(uint)(param_2[1] != 0);
  }
  if (param_2[1] == 0) {
    return 1;
  }
  uVar1 = thunk_FUN_00712780();
  return uVar1;
}

