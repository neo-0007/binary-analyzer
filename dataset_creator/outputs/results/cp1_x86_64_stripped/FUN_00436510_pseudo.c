
void FUN_00436510(int *param_1)

{
  if (param_1 != (int *)0x0) {
    if ((param_1[4] == 0) && (*(long *)(param_1 + 6) != 0)) {
      if (*param_1 < 2) {
        param_1[4] = 1;
      }
      else {
        FUN_006e8e20(*(undefined8 *)(param_1 + 2),(long)*param_1,8);
        param_1[4] = 1;
      }
    }
    return;
  }
  return;
}

