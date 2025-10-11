
undefined8 FUN_005218e0(long param_1,undefined8 param_2)

{
  if (*(long *)(param_1 + 0x50) != 0) {
    return 0;
  }
  *(undefined8 *)(param_1 + 0x50) = param_2;
  return 1;
}

