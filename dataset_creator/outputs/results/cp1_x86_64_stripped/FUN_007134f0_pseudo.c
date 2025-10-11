
code * FUN_007134f0(void)

{
  code *pcVar1;
  
  pcVar1 = FUN_00720840;
  if (((DAT_0094af08 & 0x120) == 0x120) && ((DAT_0094aff4 & 0x200) != 0)) {
    if (((int)DAT_0094af08 < 0) && ((DAT_0094af08 & 0x40000000) != 0)) {
      pcVar1 = FUN_00755f20;
      if ((DAT_0094af08 & 0x800) == 0) {
        pcVar1 = FUN_00751e20;
      }
      return pcVar1;
    }
    pcVar1 = FUN_0074e040;
    if ((DAT_0094af08 & 0x800) == 0) {
      pcVar1 = FUN_00720840;
      if ((DAT_0094aff4 & 0x400) == 0) {
        pcVar1 = FUN_00720d80;
      }
      return pcVar1;
    }
  }
  return pcVar1;
}

