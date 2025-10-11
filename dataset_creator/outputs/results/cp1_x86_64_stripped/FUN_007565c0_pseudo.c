
code * FUN_007565c0(void)

{
  code *pcVar1;
  
  if (((((DAT_0094af08 & 0x20) != 0) && ((DAT_0094aeec & 0x400000) != 0)) &&
      ((DAT_0094af08 & 0x100) != 0)) && ((DAT_0094aff4 & 0x200) != 0)) {
    if (((int)DAT_0094af08 < 0) && ((DAT_0094af08 & 0x40000000) != 0)) {
      return FUN_007600c0;
    }
    if ((DAT_0094af08 & 0x800) != 0) {
      return FUN_0075f040;
    }
    if ((DAT_0094aff4 & 0x400) == 0) {
      return FUN_0075bbc0;
    }
  }
  pcVar1 = (code *)&LAB_0075ac90;
  if (((DAT_0094aeec & 0x80000) == 0) && (pcVar1 = thunk_FUN_0075bb6a, (DAT_0094aeec & 0x200) != 0))
  {
    pcVar1 = FUN_0075b500;
  }
  return pcVar1;
}

