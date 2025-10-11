
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint ossl_rsaz_avx512ifma_eligible(void)

{
  uint uVar1;
  
  uVar1 = 0;
  if ((_DAT_0093e5a0 & 0x80230000) == 0x80230000) {
    uVar1 = _DAT_0093e5a0 & 0x80230000;
  }
  return uVar1;
}

