
int BN_clear_bit(BIGNUM *a,int n)

{
  byte bVar1;
  
  if (-1 < n) {
    if (n >> 6 < a->top) {
      bVar1 = (byte)n & 0x3f;
      a->d[n >> 6] = a->d[n >> 6] & (-2L << bVar1 | 0xfffffffffffffffeU >> 0x40 - bVar1);
      bn_correct_top();
      return 1;
    }
  }
  return 0;
}

