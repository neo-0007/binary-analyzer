
undefined8 FUN_006b8fe8(int *param_1,int param_2)

{
  for (; (param_1 != (int *)0x0 && (*param_1 == 0x2f)); param_1 = *(int **)(param_1 + 6)) {
    if (param_2 == 0) {
      return *(undefined8 *)(param_1 + 4);
    }
    param_2 = param_2 + -1;
  }
  return 0;
}

