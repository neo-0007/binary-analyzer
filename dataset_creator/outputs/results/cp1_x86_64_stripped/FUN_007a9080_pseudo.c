
code * FUN_007a9080(void)

{
  code *pcVar1;
  
  pcVar1 = FUN_007a97e0;
  if (((DAT_0094af08 & 0x120) == 0x120) && ((DAT_0094aff4 & 0x200) != 0)) {
    if (((int)DAT_0094af08 < 0) && ((DAT_0094af08 & 0x40000000) != 0)) {
      return FUN_007a9ea0;
    }
    pcVar1 = FUN_007a9c00;
    if ((DAT_0094af08 & 0x800) == 0) {
      pcVar1 = FUN_007a97e0;
      if ((DAT_0094aff4 & 0x400) == 0) {
        pcVar1 = FUN_007a9980;
      }
      return pcVar1;
    }
  }
  return pcVar1;
}

