
undefined8 FUN_00421db0(long param_1,undefined8 param_2)

{
  *(byte *)(param_1 + 200) = *(byte *)(param_1 + 200) | 1;
  *(undefined8 *)(param_1 + 0xc0) = param_2;
  return 1;
}

