
code * FUN_00712780(void)

{
  code *pcVar1;
  
  if (((DAT_0094af08 & 0x20) != 0) && ((DAT_0094aff4 & 0x200) != 0)) {
    if (((int)DAT_0094af08 < 0) && ((DAT_0094af08 & 0x40000100) == 0x40000100)) {
      return FUN_00754060;
    }
    if ((DAT_0094af08 & 0x800) != 0) {
      return FUN_0074f460;
    }
    if ((DAT_0094aff4 & 0x400) == 0) {
      return FUN_0071bf20;
    }
  }
  pcVar1 = FUN_0071aa00;
  if (((DAT_0094aff4 & 8) == 0) && (pcVar1 = FUN_007195b0, (DAT_0094aeec._1_1_ & 2) != 0)) {
    pcVar1 = FUN_0071acb0;
  }
  return pcVar1;
}

