
int BN_rand_range(BIGNUM *rnd,BIGNUM *range)

{
  int iVar1;
  
  iVar1 = bnrand_range(0,rnd,range,0,0);
  return iVar1;
}

