
undefined8 FUN_0061b550(long param_1)

{
  if (param_1 == 0) {
    return 0;
  }
  if ((*(byte *)(param_1 + 0x38) & 2) != 0) {
    return *(undefined8 *)(param_1 + 0x28);
  }
  return *(undefined8 *)(param_1 + 0x30);
}

