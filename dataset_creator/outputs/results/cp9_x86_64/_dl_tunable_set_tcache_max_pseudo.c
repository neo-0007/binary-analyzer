
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dl_tunable_set_tcache_max(ulong *param_1)

{
  ulong uVar1;
  
  uVar1 = *param_1;
  if (0x408 < uVar1) {
    return;
  }
  _DAT_00931150 = uVar1;
  DAT_00931148 = 1;
  if (0x1f < uVar1 + 0x17) {
    DAT_00931148 = ((uVar1 + 0x17 & 0xfffffffffffffff0) - 0x11 >> 4) + 1;
  }
  return;
}

