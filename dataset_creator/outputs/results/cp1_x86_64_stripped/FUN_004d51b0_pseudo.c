
undefined8 FUN_004d51b0(long param_1)

{
  *(uint *)(param_1 + 0x80) = *(uint *)(param_1 + 0x80) | 1;
  FUN_00541f00(param_1 + 8);
  *(long *)(param_1 + 200) = *(long *)(param_1 + 200) + 1;
  return 1;
}

