
undefined8 FUN_004b0d50(long param_1)

{
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0x2c) != 0) {
      if (*(int *)(param_1 + 0x28) != 0) {
        FUN_004b0060(*(undefined4 *)(param_1 + 0x38));
      }
      *(undefined4 *)(param_1 + 0x28) = 0;
      *(undefined4 *)(param_1 + 0x30) = 0;
    }
    return 1;
  }
  return 0;
}

