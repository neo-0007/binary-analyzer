
int BN_set_word(BIGNUM *a,ulong w)

{
  BIGNUM *pBVar1;
  
  if (a->dmax < 1) {
    pBVar1 = bn_expand2(a,1);
    if (pBVar1 == (BIGNUM *)0x0) {
      return 0;
    }
  }
  a->neg = 0;
  *a->d = w;
  a->top = (uint)(w != 0);
  return 1;
}

