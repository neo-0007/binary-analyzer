
undefined8 FUN_00433300(long param_1,undefined4 param_2)

{
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0xc) = param_2;
    return 1;
  }
  return 0;
}

