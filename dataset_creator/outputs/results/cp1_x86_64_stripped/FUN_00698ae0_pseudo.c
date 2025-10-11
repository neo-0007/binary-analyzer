
void FUN_00698ae0(long param_1,long param_2,undefined8 param_3,long param_4)

{
  *(long *)(param_1 + 0x20) = param_2;
  *(undefined8 *)(param_1 + 0x30) = param_3;
  if (0x7fffffff < param_4) {
    do {
      param_4 = param_4 + -0x7fffffff;
      param_2 = param_2 + 0x1fffffffc;
    } while (0x7fffffff < param_4);
  }
  *(long *)(param_1 + 0x28) = param_2 + (long)(int)param_4 * 4;
  return;
}

