
void FUN_004b7780(long *param_1)

{
  if (param_1 != (long *)0x0) {
    if (*param_1 != 0) {
      FUN_004227b0(*param_1,(long)*(int *)((long)param_1 + 0xc) << 3);
    }
    *(undefined4 *)(param_1 + 2) = 0;
    *(undefined4 *)(param_1 + 1) = 0;
    return;
  }
  return;
}

