
code * FUN_00713610(void)

{
  code *pcVar1;
  
  pcVar1 = FUN_0074c500;
  if ((DAT_0094aff4 & 0x4800) == 0) {
    if (((DAT_0094af08 & 0x10000) == 0) || ((DAT_0094aff4 & 0x1000) != 0)) {
      if ((DAT_0094aff4 & 0x200) != 0) {
        if ((int)DAT_0094af08 < 0) {
          pcVar1 = FUN_00752480;
          if ((DAT_0094af08 & 0x200) == 0) {
            pcVar1 = FUN_00752410;
          }
          return pcVar1;
        }
        if ((DAT_0094af08 & 0x800) != 0) {
          pcVar1 = FUN_0074e7c0;
          if ((DAT_0094af08 & 0x200) == 0) {
            pcVar1 = FUN_0074e750;
          }
          return pcVar1;
        }
        if ((DAT_0094aff4 & 0x400) == 0) {
          pcVar1 = FUN_0074cb80;
          if ((DAT_0094af08 & 0x200) == 0) {
            pcVar1 = FUN_0074cb10;
          }
          return pcVar1;
        }
      }
      if (((DAT_0094aeec._1_1_ & 2) == 0) || ((DAT_0094aff4 & 0x20) != 0)) {
        pcVar1 = FUN_0074c580;
        if ((DAT_0094af08 & 0x200) == 0) {
          pcVar1 = FUN_0074c490;
        }
        return pcVar1;
      }
      pcVar1 = FUN_00724cb0;
      if ((DAT_0094aff4 & 2) != 0) {
        pcVar1 = FUN_0072a350;
      }
    }
    else {
      pcVar1 = FUN_0072cea0;
      if ((int)DAT_0094af08 < 0) {
        pcVar1 = FUN_0074d300;
        if ((DAT_0094af08 & 0x200) == 0) {
          pcVar1 = FUN_0074d290;
        }
        return pcVar1;
      }
    }
  }
  return pcVar1;
}

