
undefined8 FUN_004642d9(int *param_1)

{
  while( true ) {
    if (*param_1 == 0) {
      return 0;
    }
    if (*param_1 == 0x2a) break;
    param_1 = param_1 + 4;
  }
  return *(undefined8 *)(param_1 + 2);
}

