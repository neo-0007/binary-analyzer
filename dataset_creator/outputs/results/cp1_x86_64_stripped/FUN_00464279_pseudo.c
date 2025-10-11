
undefined8 FUN_00464279(int *param_1)

{
  while( true ) {
    if (*param_1 == 0) {
      return 0;
    }
    if (*param_1 == 10) break;
    param_1 = param_1 + 4;
  }
  return *(undefined8 *)(param_1 + 2);
}

