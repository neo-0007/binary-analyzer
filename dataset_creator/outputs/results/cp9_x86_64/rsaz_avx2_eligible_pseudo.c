
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint rsaz_avx2_eligible(void)

{
  uint uVar1;
  
  uVar1 = _DAT_0093e5a0;
  if ((_DAT_0093e5a0 & 0x80100) == 0x80100) {
    uVar1 = 0;
  }
  return (uVar1 & 0x20) >> 5;
}

