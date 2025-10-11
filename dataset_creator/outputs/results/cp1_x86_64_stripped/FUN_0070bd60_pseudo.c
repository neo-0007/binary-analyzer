
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0070bd60(ulong *param_1)

{
  ulong uVar1;
  
  uVar1 = *param_1;
  if (0x408 < uVar1) {
    return;
  }
  _DAT_0093e130 = uVar1;
  DAT_0093e128 = 1;
  if (0x1f < uVar1 + 0x17) {
    DAT_0093e128 = ((uVar1 + 0x17 & 0xfffffffffffffff0) - 0x11 >> 4) + 1;
  }
  return;
}

