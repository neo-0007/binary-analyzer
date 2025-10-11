
code * FUN_00713930(void)

{
  code *pcVar1;
  
  if (((DAT_0094af08 & 0x20) != 0) && ((DAT_0094aff4 & 0x200) != 0)) {
    if (((int)DAT_0094af08 < 0) && ((DAT_0094af08 & 0x40000000) != 0)) {
      return FUN_00752fa0;
    }
    if ((DAT_0094af08 & 0x800) != 0) {
      return FUN_0074faf0;
    }
    if ((DAT_0094aff4 & 0x400) == 0) {
      return FUN_00749070;
    }
  }
  pcVar1 = FUN_007489b0;
  if (((DAT_0094aff4 & 8) == 0) && (pcVar1 = FUN_00741740, (DAT_0094aeec._1_1_ & 2) != 0)) {
    pcVar1 = FUN_00745b60;
  }
  return pcVar1;
}

