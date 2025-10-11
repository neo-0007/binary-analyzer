
undefined8 FUN_005218c0(long param_1,undefined8 param_2)

{
  if (*(long *)(param_1 + 0x48) != 0) {
    return 0;
  }
  *(undefined8 *)(param_1 + 0x48) = param_2;
  return 1;
}

