
void FUN_004a2300(int *param_1)

{
  if (param_1 == (int *)0x0) {
    return;
  }
  if ((*(long *)(param_1 + 2) != 0) && ((*(byte *)(param_1 + 4) & 0x10) == 0)) {
    FUN_004227b0(*(long *)(param_1 + 2),(long)*param_1);
    FUN_004a2270(param_1);
    return;
  }
  FUN_004a2270(param_1);
  return;
}

