
code * FUN_00756460(void)

{
  code *pcVar1;
  
  pcVar1 = FUN_0075c650;
  if (((DAT_0094af08 & 0x120) == 0x120) && ((DAT_0094aff4 & 0x200) != 0)) {
    if (((int)DAT_0094af08 < 0) && ((DAT_0094af08 & 0x40000000) != 0)) {
      return FUN_0075f440;
    }
    pcVar1 = FUN_0075e390;
    if ((DAT_0094af08 & 0x800) == 0) {
      pcVar1 = FUN_0075c650;
      if ((DAT_0094aff4 & 0x400) == 0) {
        pcVar1 = FUN_0075d320;
      }
      return pcVar1;
    }
  }
  return pcVar1;
}

