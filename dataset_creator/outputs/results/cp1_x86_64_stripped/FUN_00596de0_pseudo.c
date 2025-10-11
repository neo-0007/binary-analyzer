
undefined8 FUN_00596de0(long param_1,undefined8 param_2,undefined8 param_3)

{
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 0x30) = param_2;
    *(undefined8 *)(param_1 + 0x38) = param_3;
    return 0;
  }
  return 0xffffffff;
}

