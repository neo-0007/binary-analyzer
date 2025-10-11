
void FUN_0063aed0(long *param_1,long param_2)

{
  if (param_1 == &DAT_009452c0) {
    return;
  }
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = param_2;
  *(undefined4 *)((long)param_1 + param_2 * 4 + 0x18) = 0;
  return;
}

