
undefined8 FUN_004332c0(long param_1,undefined4 param_2)

{
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 4) = param_2;
    return 1;
  }
  return 0;
}

