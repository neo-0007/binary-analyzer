
code * FUN_00712710(void)

{
  code *pcVar1;
  
  if (((DAT_0094af08 & 0x120) == 0x120) && ((DAT_0094aff4 & 0x200) != 0)) {
    if (((int)DAT_0094af08 < 0) && ((DAT_0094af08 & 0x40000000) != 0)) {
      return FUN_00753b60;
    }
    if ((DAT_0094af08 & 0x800) != 0) {
      return FUN_0074f1e0;
    }
    if ((DAT_0094aff4 & 0x400) == 0) {
      return FUN_0073d560;
    }
  }
  pcVar1 = FUN_0073d120;
  if ((DAT_0094aff4 & 4) != 0) {
    pcVar1 = FUN_00749ed0;
  }
  return pcVar1;
}

