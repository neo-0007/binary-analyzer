
code * FUN_00713570(void)

{
  code *pcVar1;
  
  if (((((DAT_0094af08 & 0x20) != 0) && ((DAT_0094aeec & 0x400000) != 0)) &&
      ((DAT_0094af08 & 0x100) != 0)) && ((DAT_0094aff4 & 0x200) != 0)) {
    if (((int)DAT_0094af08 < 0) && ((DAT_0094af08 & 0x40000000) != 0)) {
      return FUN_00752100;
    }
    if ((DAT_0094af08 & 0x800) != 0) {
      return FUN_0074e300;
    }
    if ((DAT_0094aff4 & 0x400) == 0) {
      return FUN_007215c0;
    }
  }
  pcVar1 = FUN_00721a00;
  if (((DAT_0094aeec & 0x80000) == 0) && (pcVar1 = FUN_007211c0, (DAT_0094aeec & 0x200) != 0)) {
    pcVar1 = FUN_0074a1f0;
  }
  return pcVar1;
}

