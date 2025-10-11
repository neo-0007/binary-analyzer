
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint x25519_fe64_eligible(void)

{
  uint uVar1;
  
  uVar1 = 0;
  if ((_DAT_0093e5a0 & 0x80100) == 0x80100) {
    uVar1 = _DAT_0093e5a0 & 0x80100;
  }
  return uVar1;
}

