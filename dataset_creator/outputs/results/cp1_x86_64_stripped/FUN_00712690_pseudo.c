
code * FUN_00712690(void)

{
  code *pcVar1;
  
  if (((DAT_0094af08 & 0x20) != 0) && ((DAT_0094aff4 & 0x200) != 0)) {
    if (((int)DAT_0094af08 < 0) && ((DAT_0094af08 & 0x40000000) != 0)) {
      return FUN_007533f0;
    }
    if ((DAT_0094af08 & 0x800) != 0) {
      return FUN_0074feb0;
    }
    if ((DAT_0094aff4 & 0x400) == 0) {
      return FUN_0073e6d0;
    }
  }
  pcVar1 = FUN_007495e0;
  if (((DAT_0094aff4 & 8) == 0) && (pcVar1 = FUN_00749420, (DAT_0094aeec._1_1_ & 2) != 0)) {
    pcVar1 = FUN_0073ed40;
  }
  return pcVar1;
}

