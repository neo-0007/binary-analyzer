
uint FUN_004b0060(int param_1)

{
  uint uVar1;
  
  if (-1 < param_1) {
    uVar1 = FUN_0076dc30();
    return ~uVar1 >> 0x1f;
  }
  return 0;
}

