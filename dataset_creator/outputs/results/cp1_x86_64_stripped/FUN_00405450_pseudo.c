
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00405450(void)

{
  undefined8 *puVar1;
  
  _DAT_009428a0 = 0;
  _DAT_009428b8 = 0x11c00;
  _DAT_00942880 = (undefined1  [16])0x0;
  _DAT_00942890 = (undefined1  [16])0x0;
  puVar1 = (undefined8 *)FUN_007101b0(0x11c00);
  DAT_009428b0 = puVar1;
  if (puVar1 == (undefined8 *)0x0) {
    _DAT_009428b8 = 0;
    DAT_009428a8 = (undefined8 *)0x0;
  }
  else {
    DAT_009428a8 = puVar1;
    *puVar1 = 0x11c00;
    puVar1[1] = 0;
  }
  return;
}

