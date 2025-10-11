
undefined8 FUN_00596da0(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 0x20) = param_2;
    return 0;
  }
  return 0xffffffff;
}

