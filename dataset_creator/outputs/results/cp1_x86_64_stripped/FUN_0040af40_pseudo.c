
undefined8 FUN_0040af40(long param_1,undefined8 param_2)

{
  if (*(long *)(param_1 + 0x50) != 0) {
    return 0;
  }
  *(undefined8 *)(param_1 + 0x50) = param_2;
  return 1;
}

