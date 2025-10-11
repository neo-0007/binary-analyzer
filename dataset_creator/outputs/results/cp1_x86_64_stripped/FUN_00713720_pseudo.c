
code * FUN_00713720(void)

{
  uint uVar1;
  code *pcVar2;
  
  pcVar2 = FUN_0074db50;
  if ((DAT_0094aff4 & 0x800) == 0) {
    if (((DAT_0094af08 & 0x10000) == 0) || ((DAT_0094aff4 & 0x1000) != 0)) {
      uVar1 = DAT_0094af08 & 0x200;
      if ((DAT_0094af08 & 0x20) != 0) {
        if (((int)DAT_0094af08 < 0) && ((DAT_0094af08 & 0x40000100) == 0x40000100)) {
          pcVar2 = FUN_00752cc0;
          if (uVar1 == 0) {
            pcVar2 = FUN_00752c60;
          }
          return pcVar2;
        }
        if ((DAT_0094af08 & 0x800) != 0) {
          pcVar2 = FUN_0074ef40;
          if (uVar1 == 0) {
            pcVar2 = FUN_0074eee0;
          }
          return pcVar2;
        }
        if ((DAT_0094aff4 & 0x400) == 0) {
          pcVar2 = FUN_0074dd00;
          if (uVar1 == 0) {
            pcVar2 = FUN_0074dca0;
          }
          return pcVar2;
        }
      }
      pcVar2 = FUN_0074db00;
      if (uVar1 != 0) {
        pcVar2 = FUN_0074db80;
      }
    }
    else {
      pcVar2 = FUN_0074c1e0;
      if (((int)DAT_0094af08 < 0) && ((DAT_0094af08 & 0x40000100) == 0x40000100)) {
        pcVar2 = FUN_0074dec0;
        if ((DAT_0094af08 & 0x200) == 0) {
          pcVar2 = FUN_0074de60;
        }
        return pcVar2;
      }
    }
  }
  return pcVar2;
}

