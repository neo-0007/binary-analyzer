
code * FUN_00712b50(void)

{
  code *pcVar1;
  
  if (((DAT_0094af08 & 0x20) != 0) && ((DAT_0094aff4 & 0x200) != 0)) {
    if (((int)DAT_0094af08 < 0) && ((DAT_0094af08 & 0x40000000) != 0)) {
      return FUN_00755010;
    }
    if ((DAT_0094af08 & 0x800) != 0) {
      return FUN_00750fc0;
    }
    if ((DAT_0094aff4 & 0x400) == 0) {
      return FUN_00740cf0;
    }
  }
  pcVar1 = FUN_007479a0;
  if (((DAT_0094aff4 & 8) == 0) && (pcVar1 = FUN_00719550, (DAT_0094aeec._1_1_ & 2) != 0)) {
    pcVar1 = FUN_00742fe0;
  }
  return pcVar1;
}

