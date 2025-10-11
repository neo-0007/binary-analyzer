
int BN_pseudo_rand(BIGNUM *rnd,int bits,int top,int bottom)

{
  int iVar1;
  
  iVar1 = BN_rand(rnd,bits,top,bottom);
  return iVar1;
}

