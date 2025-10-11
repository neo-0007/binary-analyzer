
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007c0620(undefined8 param_1,undefined8 param_2,long param_3)

{
  short *psVar1;
  ulong uVar2;
  
  uVar2 = *(long *)(param_3 + 0xa8) - _DAT_0094b568;
  uVar2 = (uVar2 >> 0x11) * (ulong)DAT_0094b560 +
          ((uVar2 >> 1 & 0xffff) * (ulong)DAT_0094b560 >> 0x10);
  if (uVar2 < DAT_0094b570) {
    psVar1 = (short *)(DAT_0094b578 + uVar2 * 2);
    *psVar1 = *psVar1 + 1;
  }
  return;
}

