
undefined8 FUN_004b05f0(long param_1)

{
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0x2c) != 0) {
      if ((*(int *)(param_1 + 0x28) != 0) && (*(long *)(param_1 + 0x40) != 0)) {
        FUN_006fd190();
        *(undefined8 *)(param_1 + 0x40) = 0;
        *(undefined4 *)(param_1 + 0x30) = 0;
      }
      *(undefined4 *)(param_1 + 0x28) = 0;
    }
    return 1;
  }
  return 0;
}

