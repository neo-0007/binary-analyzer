
void padlock_key_bswap(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = param_1[0x3c];
  do {
    uVar1 = *param_1;
    *param_1 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
    param_1 = param_1 + 1;
    uVar2 = uVar2 - 1;
  } while (uVar2 != 0);
  return;
}

