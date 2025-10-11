
undefined8 FUN_0042c0f0(long param_1,long param_2,long param_3,long param_4)

{
  if (((*(long *)(param_1 + 0x50) != 0 || param_2 != 0) &&
      (param_3 != 0 || *(long *)(param_1 + 0x58) != 0)) &&
     (param_4 != 0 || *(long *)(param_1 + 0x60) != 0)) {
    if (param_2 != 0) {
      FUN_004b7f20();
      *(long *)(param_1 + 0x50) = param_2;
      FUN_004b7e70(param_2,4);
    }
    if (param_3 != 0) {
      FUN_004b7f20(*(undefined8 *)(param_1 + 0x58));
      *(long *)(param_1 + 0x58) = param_3;
      FUN_004b7e70(param_3,4);
    }
    if (param_4 != 0) {
      FUN_004b7f20(*(undefined8 *)(param_1 + 0x60));
      *(long *)(param_1 + 0x60) = param_4;
      FUN_004b7e70(param_4,4);
    }
    *(int *)(param_1 + 0xd8) = *(int *)(param_1 + 0xd8) + 1;
    return 1;
  }
  return 0;
}

