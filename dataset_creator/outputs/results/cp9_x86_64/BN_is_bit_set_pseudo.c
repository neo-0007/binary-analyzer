
int BN_is_bit_set(BIGNUM *a,int n)

{
  uint uVar1;
  
  uVar1 = 0;
  if ((-1 < n) && (uVar1 = 0, n >> 6 < a->top)) {
    uVar1 = (uint)(a->d[n >> 6] >> ((byte)n & 0x3f)) & 1;
  }
  return uVar1;
}

