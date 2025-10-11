
long sh_getlist(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  uVar2 = (param_1 + DAT_00932cd8) - DAT_00932cd0;
  lVar3 = DAT_00932ce8 + -1;
  uVar1 = uVar2 / DAT_00932cf0;
  if (DAT_00932cf0 <= uVar2) {
    uVar2 = uVar1 >> 3;
    while ((*(byte *)(DAT_00932cf8 + uVar2) >> ((uint)uVar1 & 7) & 1) == 0) {
      if ((uVar1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        OPENSSL_die("assertion failed: (bit & 1) == 0","../crypto/mem_sec.c",0x137);
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

