
ulong BN_div_word(BIGNUM *a,ulong w)

{
  ulong l;
  int iVar1;
  int iVar2;
  ulong uVar3;
  byte bVar4;
  ulong *puVar5;
  long lVar6;
  ulong d;
  uint uVar7;
  ulong uVar8;
  
  if (w != 0) {
    uVar8 = 0;
    if (a->top == 0) {
      return 0;
    }
    iVar1 = BN_num_bits_word(w);
    iVar2 = BN_lshift(a,a,0x40 - iVar1);
    if (iVar2 != 0) {
      iVar2 = a->top;
      uVar7 = iVar2 - 1;
      if (-1 < (int)uVar7) {
        puVar5 = a->d;
        bVar4 = (byte)(0x40 - iVar1);
        d = w << (bVar4 & 0x3f);
        lVar6 = (long)(int)uVar7 << 3;
        uVar8 = 0;
        do {
          l = *(ulong *)((long)puVar5 + lVar6);
          uVar3 = bn_div_words(uVar8,l,d);
          uVar8 = l - d * uVar3;
          puVar5 = a->d;
          *(ulong *)((long)puVar5 + lVar6) = uVar3;
          lVar6 = lVar6 + -8;
        } while (((long)iVar2 - (ulong)uVar7) * 8 + -0x10 != lVar6);
        iVar2 = a->top;
        uVar8 = uVar8 >> (bVar4 & 0x3f);
      }
      if (0 < iVar2) {
        if (a->d[(long)iVar2 + -1] != 0) {
          return uVar8;
        }
        iVar2 = iVar2 + -1;
        a->top = iVar2;
      }
      if (iVar2 != 0) {
        return uVar8;
      }
      a->neg = 0;
      return uVar8;
    }
  }
  return 0xffffffffffffffff;
}

