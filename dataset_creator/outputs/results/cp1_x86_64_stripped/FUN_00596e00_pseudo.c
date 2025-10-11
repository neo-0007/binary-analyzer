
undefined8 FUN_00596e00(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 0x40) = param_2;
    return 0;
  }
  return 0xffffffff;
}

