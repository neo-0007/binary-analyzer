
int BN_rand(BIGNUM *rnd,int bits,int top,int bottom)

{
  int iVar1;
  
  iVar1 = bnrand(0,rnd,bits,top,bottom,0,0);
  return iVar1;
}

