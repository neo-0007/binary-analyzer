
void FUN_006b5a20(long *param_1)

{
  param_1[1] = 0;
  *param_1 = (long)(param_1 + 2);
  *(undefined4 *)(param_1 + 2) = 0;
  return;
}

