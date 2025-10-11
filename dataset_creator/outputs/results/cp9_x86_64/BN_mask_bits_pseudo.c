
int BN_mask_bits(BIGNUM *a,int n)

{
  int iVar1;
  
  if ((-1 < n) && (iVar1 = n >> 6, iVar1 < a->top)) {
    if ((n & 0x3fU) == 0) {
      a->top = iVar1;
      bn_correct_top();
      return 1;
    }
    a->top = iVar1 + 1;
    a->d[iVar1] = a->d[iVar1] & ~(-1L << (sbyte)(n & 0x3fU));
    bn_correct_top();
    return 1;
  }
  return 0;
}

