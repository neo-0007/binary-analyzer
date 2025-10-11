
void FUN_006924a0(long *param_1)

{
  if (*param_1 != 0) {
    FUN_0076dc30((int)param_1[2]);
    *(undefined4 *)(param_1 + 2) = 0xffffffff;
    *param_1 = 0;
    return;
  }
  return;
}

