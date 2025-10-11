
undefined8 ecx_security_bits(long param_1)

{
  if ((**(int **)(param_1 + 8) != 0x40a) && (**(int **)(param_1 + 8) != 0x43f)) {
    return 0xe0;
  }
  return 0x80;
}

