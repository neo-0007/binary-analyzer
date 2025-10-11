
ulong FUN_004a2350(int *param_1,int *param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar1 = *param_1 - *param_2;
  if (uVar1 != 0) {
    return (ulong)uVar1;
  }
  if (*param_1 != 0) {
    uVar2 = thunk_FUN_00713570(*(undefined8 *)(param_1 + 2),*(undefined8 *)(param_2 + 2));
    if ((int)uVar2 != 0) {
      return uVar2;
    }
  }
  return (ulong)(uint)(param_1[1] - param_2[1]);
}

