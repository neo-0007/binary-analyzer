
undefined8 FUN_00596d60(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 0x10) = param_2;
    return 0;
  }
  return 0xffffffff;
}

