
uint FUN_004bea80(void)

{
  uint uVar1;
  
  uVar1 = DAT_0094b5a0;
  if ((DAT_0094b5a0 & 0x80100) == 0x80100) {
    uVar1 = 0;
  }
  return (uVar1 & 0x20) >> 5;
}

