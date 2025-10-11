
code * FUN_007129d0(void)

{
  code *pcVar1;
  
  pcVar1 = FUN_0073dec0;
  if (((DAT_0094af08 & 0x120) == 0x120) && ((DAT_0094aff4 & 0x200) != 0)) {
    if (((int)DAT_0094af08 < 0) && ((DAT_0094af08 & 0x40000000) != 0)) {
      return FUN_00754920;
    }
    pcVar1 = FUN_00750900;
    if ((DAT_0094af08 & 0x800) == 0) {
      pcVar1 = FUN_0073dec0;
      if ((DAT_0094aff4 & 0x400) == 0) {
        pcVar1 = FUN_0073e280;
      }
      return pcVar1;
    }
  }
  return pcVar1;
}

