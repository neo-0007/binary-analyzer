
undefined8 FUN_004829d0(long param_1)

{
  if (*(int *)(param_1 + 0x10) == 0) {
    FUN_004ab560(*(undefined8 *)(param_1 + 0x18));
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  else {
    if (*(int *)(param_1 + 0x10) != 1) {
      return 1;
    }
    if (*(long *)(param_1 + 0x18) != 0) {
      FUN_00546f80(param_1 + 0x18);
    }
  }
  FUN_004828e0(param_1);
  return 1;
}

