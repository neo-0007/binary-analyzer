
undefined8 FUN_004d8ee0(long param_1)

{
  *(uint *)(param_1 + 0x78) = *(uint *)(param_1 + 0x78) | 1;
  FUN_00541f00(param_1 + 8);
  *(long *)(param_1 + 0xc0) = *(long *)(param_1 + 0xc0) + 1;
  return 1;
}

