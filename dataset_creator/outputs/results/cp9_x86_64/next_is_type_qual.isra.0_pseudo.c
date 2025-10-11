
uint next_is_type_qual_isra_0(char *param_1)

{
  byte bVar1;
  
  bVar1 = *param_1 + 0xb5;
  if (bVar1 < 0x28) {
    return (uint)(-0x8000000802 >> (bVar1 & 0x3f)) & 1 ^ 1;
  }
  if (*param_1 != 'D') {
    return 0;
  }
  return (uint)((byte)(param_1[1] + 0x89U) < 2 || (param_1[1] & 0xdfU) == 0x4f);
}

