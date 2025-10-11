
int BN_reciprocal(BIGNUM *r,BIGNUM *m,int len,BN_CTX *ctx)

{
  int iVar1;
  BIGNUM *a;
  
  BN_CTX_start(ctx);
  a = BN_CTX_get(ctx);
  if (a != (BIGNUM *)0x0) {
    iVar1 = BN_set_bit(a,len);
    if (iVar1 != 0) {
      iVar1 = BN_div(r,(BIGNUM *)0x0,a,m,ctx);
      if (iVar1 != 0) goto LAB_005b7157;
    }
  }
  len = -1;
LAB_005b7157:
  BN_CTX_end(ctx);
  return len;
}

