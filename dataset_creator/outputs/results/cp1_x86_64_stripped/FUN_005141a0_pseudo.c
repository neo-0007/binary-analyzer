
undefined8 FUN_005141a0(long param_1,uint *param_2)

{
  if (param_1 != 0) {
    *param_2 = *(byte *)(param_1 + 0x20) & 1;
    return *(undefined8 *)(param_1 + 0x18);
  }
  return 0;
}

