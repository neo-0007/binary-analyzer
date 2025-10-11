
code * FUN_00756540(void)

{
  code *pcVar1;
  
  pcVar1 = FUN_0075bfc0;
  if (((DAT_0094af08 & 0x120) == 0x120) && ((DAT_0094aff4 & 0x200) != 0)) {
    if (((int)DAT_0094af08 < 0) && ((DAT_0094af08 & 0x40000000) != 0)) {
      pcVar1 = FUN_00760400;
      if ((DAT_0094af08 & 0x800) == 0) {
        pcVar1 = FUN_0075fda0;
      }
      return pcVar1;
    }
    pcVar1 = FUN_0075ed60;
    if ((DAT_0094af08 & 0x800) == 0) {
      pcVar1 = FUN_0075bfc0;
      if ((DAT_0094aff4 & 0x400) == 0) {
        pcVar1 = FUN_0075c360;
      }
      return pcVar1;
    }
  }
  return pcVar1;
}

