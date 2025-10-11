
code * FUN_007564d0(void)

{
  code *pcVar1;
  
  if (((DAT_0094af08 & 0x120) == 0x120) && ((DAT_0094aff4 & 0x200) != 0)) {
    if (((int)DAT_0094af08 < 0) && ((DAT_0094af08 & 0x40000000) != 0)) {
      return FUN_0075f900;
    }
    if ((DAT_0094af08 & 0x800) != 0) {
      return FUN_0075e7e0;
    }
    if ((DAT_0094aff4 & 0x400) == 0) {
      return FUN_0075dbc0;
    }
  }
  pcVar1 = FUN_0075d770;
  if ((DAT_0094aeec._2_1_ & 8) != 0) {
    pcVar1 = FUN_0075da10;
  }
  return pcVar1;
}

