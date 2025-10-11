
void FUN_00637bb0(long *param_1,long param_2)

{
  if (param_1 == &DAT_009452a0) {
    return;
  }
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = param_2;
  *(undefined1 *)((long)param_1 + param_2 + 0x18) = 0;
  return;
}

