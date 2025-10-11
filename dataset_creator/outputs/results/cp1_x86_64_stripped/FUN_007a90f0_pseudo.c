
code * FUN_007a90f0(void)

{
  code *pcVar1;
  
  pcVar1 = FUN_0074dae0;
  if (((DAT_0094af08 & 0x20) != 0) && ((DAT_0094aff4 & 0x200) != 0)) {
    if ((int)DAT_0094af08 < 0) {
      pcVar1 = FUN_0074de40;
      if ((DAT_0094aff4 & 0x1000) != 0) {
        pcVar1 = FUN_00752c40;
      }
      return pcVar1;
    }
    pcVar1 = FUN_0074eec0;
    if (((DAT_0094af08 & 0x800) == 0) && (pcVar1 = FUN_0074dae0, (DAT_0094aff4 & 0x400) == 0)) {
      pcVar1 = FUN_0074dc80;
    }
  }
  return pcVar1;
}

