
void FUN_0070bf30(ulong *param_1)

{
  ulong uVar1;
  
  uVar1 = *param_1;
  if (0xa0 < uVar1) {
    return;
  }
  DAT_0094a9c0 = 0x10;
  if (7 < uVar1) {
    DAT_0094a9c0 = uVar1 + 8 & 0xfffffffffffffff0;
  }
  return;
}

