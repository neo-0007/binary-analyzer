
undefined8 FUN_007a1bf0(byte *param_1)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = *(long *)(param_1 + 0x38);
  if (lVar1 == 0) {
    FUN_007a1810();
    lVar1 = *(long *)(param_1 + 0x38);
  }
  uVar2 = *(long *)(param_1 + 0x40) - lVar1;
  if ((*param_1 & 1) != 0) {
    uVar2 = (*(long *)(param_1 + 0x40) - lVar1) + 3U >> 2;
  }
  lVar1 = FUN_007101b0(uVar2 * 4);
  if (lVar1 != 0) {
    FUN_006ff050(param_1,lVar1,lVar1 + uVar2 * 4,1);
    return 1;
  }
  return 0xffffffff;
}

