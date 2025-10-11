
int BN_num_bits(BIGNUM *a)

{
  ulong *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  long lVar9;
  
  uVar3 = a->top;
  uVar2 = uVar3 - 1;
  if ((a->flags & 4U) == 0) {
    iVar4 = BN_is_zero();
    uVar8 = 0;
    if (iVar4 == 0) {
      iVar4 = BN_num_bits_word(a->d[(int)uVar2]);
      uVar8 = uVar2 * 0x40 + iVar4;
    }
  }
  else if (a->dmax < 1) {
    uVar8 = 0;
  }
  else {
    lVar9 = 0;
    uVar8 = 0;
    uVar7 = 0;
    do {
      uVar5 = uVar2 ^ (uint)lVar9;
      uVar6 = (int)(~uVar5 & uVar5 - 1) >> 0x1f;
      puVar1 = a->d + lVar9;
      uVar7 = uVar7 | uVar6;
      lVar9 = lVar9 + 1;
      uVar5 = BN_num_bits_word(*puVar1);
      uVar8 = (~uVar7 & 0x40) + (uVar5 & uVar6) + uVar8;
    } while ((int)lVar9 < a->dmax);
    uVar8 = uVar8 & ~((int)(~uVar3 & uVar2) >> 0x1f);
  }
  return uVar8;
}

