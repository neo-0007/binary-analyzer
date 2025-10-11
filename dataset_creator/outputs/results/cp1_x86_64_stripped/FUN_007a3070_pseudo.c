
code * FUN_007a3070(void)

{
  code *pcVar1;
  
  if (((DAT_0094af08 & 0x20) != 0) && ((DAT_0094aff4 & 0x200) != 0)) {
    if (((int)DAT_0094af08 < 0) && ((DAT_0094af08 & 0x40000000) != 0)) {
      return FUN_007a8500;
    }
    if ((DAT_0094af08 & 0x800) != 0) {
      return FUN_007a7b40;
    }
    if ((DAT_0094aff4 & 0x400) == 0) {
      return FUN_007a6fe0;
    }
  }
  pcVar1 = FUN_007a5e50;
  if (((DAT_0094aff4 & 8) == 0) && (pcVar1 = FUN_007a3190, (DAT_0094aeec._1_1_ & 2) != 0)) {
    pcVar1 = FUN_007a3200;
  }
  return pcVar1;
}

