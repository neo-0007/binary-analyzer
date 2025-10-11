
code * FUN_00713820(void)

{
  code *pcVar1;
  
  pcVar1 = FUN_0074c4d0;
  if ((DAT_0094aff4 & 0x4800) == 0) {
    if (((DAT_0094af08 & 0x10000) == 0) || ((DAT_0094aff4 & 0x1000) != 0)) {
      if ((DAT_0094aff4 & 0x200) != 0) {
        if ((int)DAT_0094af08 < 0) {
          pcVar1 = FUN_00752450;
          if ((DAT_0094af08 & 0x200) == 0) {
            pcVar1 = FUN_00752400;
          }
          return pcVar1;
        }
        if ((DAT_0094af08 & 0x800) != 0) {
          pcVar1 = FUN_0074e790;
          if ((DAT_0094af08 & 0x200) == 0) {
            pcVar1 = FUN_0074e740;
          }
          return pcVar1;
        }
        if ((DAT_0094aff4 & 0x400) == 0) {
          pcVar1 = FUN_0074cb50;
          if ((DAT_0094af08 & 0x200) == 0) {
            pcVar1 = FUN_0074cb00;
          }
          return pcVar1;
        }
      }
      if (((DAT_0094aeec._1_1_ & 2) == 0) || ((DAT_0094aff4 & 0x20) != 0)) {
        pcVar1 = FUN_0074c540;
        if ((DAT_0094af08 & 0x200) == 0) {
          pcVar1 = FUN_0074c480;
        }
        return pcVar1;
      }
      pcVar1 = FUN_007222b0;
      if ((DAT_0094aff4 & 2) != 0) {
        pcVar1 = FUN_00727840;
      }
    }
    else {
      pcVar1 = FUN_0072ce80;
      if ((int)DAT_0094af08 < 0) {
        pcVar1 = FUN_0074d2d0;
        if ((DAT_0094af08 & 0x200) == 0) {
          pcVar1 = FUN_0074d280;
        }
        return pcVar1;
      }
    }
  }
  return pcVar1;
}

