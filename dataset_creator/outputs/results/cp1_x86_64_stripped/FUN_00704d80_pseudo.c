
void FUN_00704d80(uint *param_1)

{
  *param_1 = *param_1 | 0x240c;
  param_1[0x24] = 0xffffffff;
  param_1[0x25] = 0xffffffff;
  FUN_007061e0();
  param_1[0x1c] = 0xffffffff;
  return;
}

