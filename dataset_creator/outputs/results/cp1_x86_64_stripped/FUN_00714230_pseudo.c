
code * FUN_00714230(void)

{
  code *pcVar1;
  
  pcVar1 = FUN_0073d350;
  if (((DAT_0094af08 & 0x120) == 0x120) && ((DAT_0094aff4 & 0x200) != 0)) {
    if (((int)DAT_0094af08 < 0) && ((DAT_0094af08 & 0x40000000) != 0)) {
      return FUN_00753e00;
    }
    pcVar1 = FUN_0074f8e0;
    if ((DAT_0094af08 & 0x800) == 0) {
      pcVar1 = FUN_0073d350;
      if ((DAT_0094aff4 & 0x400) == 0) {
        pcVar1 = FUN_0073d7e0;
      }
      return pcVar1;
    }
  }
  return pcVar1;
}

