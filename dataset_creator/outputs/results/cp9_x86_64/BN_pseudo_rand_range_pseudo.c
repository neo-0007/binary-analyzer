
int BN_pseudo_rand_range(BIGNUM *rnd,BIGNUM *range)

{
  int iVar1;
  
  iVar1 = BN_rand_range(rnd,range);
  return iVar1;
}

