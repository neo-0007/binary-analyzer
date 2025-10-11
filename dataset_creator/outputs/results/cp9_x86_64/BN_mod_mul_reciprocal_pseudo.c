
int BN_mod_mul_reciprocal(BIGNUM *r,BIGNUM *x,BIGNUM *y,BN_RECP_CTX *recp,BN_CTX *ctx)

{
  int iVar1;
  BIGNUM *r_00;
  
  BN_CTX_start(ctx);
  r_00 = BN_CTX_get(ctx);
  if (r_00 == (BIGNUM *)0x0) {
LAB_005b7498:
    iVar1 = 0;
  }
  else {
    if (y != (BIGNUM *)0x0) {
      if (y == x) {
        iVar1 = BN_sqr(r_00,y,ctx);
      }
      else {
        iVar1 = BN_mul(r_00,x,y,ctx);
      }
      x = r_00;
      if (iVar1 == 0) goto LAB_005b7498;
    }
    iVar1 = BN_div_recp((BIGNUM *)0x0,r,x,recp,ctx);
  }
  BN_CTX_end(ctx);
  return iVar1;
}

