
long FUN_0041b470(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  uVar2 = (param_1 + DAT_0093fcb8) - DAT_0093fcb0;
  lVar3 = DAT_0093fcc8 + -1;
  uVar1 = uVar2 / DAT_0093fcd0;
  if (DAT_0093fcd0 <= uVar2) {
    uVar2 = uVar1 >> 3;
    while ((*(byte *)(DAT_0093fcd8 + uVar2) >> ((uint)uVar1 & 7) & 1) == 0) {
      if ((uVar1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00418e30("assertion failed: (bit & 1) == 0","../crypto/mem_sec.c",0x137);
      }
      lVar3 = lVar3 + -1;
      if (uVar1 >> 1 == 0) {
        return lVar3;
      }
      uVar2 = uVar1 >> 4;
      uVar1 = uVar1 >> 1;
    }
  }
  return lVar3;
}

