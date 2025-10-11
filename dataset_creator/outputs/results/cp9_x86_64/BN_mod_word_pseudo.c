
ulong BN_mod_word(BIGNUM *a,ulong w)

{
  ulong *puVar1;
  BIGNUM *a_00;
  ulong uVar2;
  int iVar3;
  long lVar4;
  
  if (w == 0) {
    return 0xffffffffffffffff;
  }
  if (w < 0x100000001) {
    iVar3 = a->top + -1;
    if (iVar3 < 0) {
      uVar2 = 0;
    }
    else {
      lVar4 = (long)iVar3;
      uVar2 = 0;
      do {
        puVar1 = a->d + lVar4;
        lVar4 = lVar4 + -1;
        uVar2 = ((uVar2 << 0x20 | *puVar1 >> 0x20) % w << 0x20 | *puVar1 & 0xffffffff) % w;
      } while (-1 < (int)lVar4);
    }
  }
  else {
    a_00 = BN_dup(a);
    uVar2 = 0xffffffffffffffff;
    if (a_00 != (BIGNUM *)0x0) {
      uVar2 = BN_div_word(a_00,w);
      BN_free(a_00);
      return uVar2;
    }
  }
  return uVar2;
}

