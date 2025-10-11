
int BN_div(BIGNUM *dv,BIGNUM *rem,BIGNUM *m,BIGNUM *d,BN_CTX *ctx)

{
  int iVar1;
  
  iVar1 = BN_is_zero(d);
  if (iVar1 == 0) {
    if (d->d[(long)d->top + -1] == 0) {
      ERR_new();
      ERR_set_debug("../crypto/bn/bn_div.c",0xe1,"BN_div");
      ERR_set_error(3,0x6b,0);
      iVar1 = 0;
    }
    else {
      iVar1 = bn_div_fixed_top(dv,rem,m,d,ctx);
      if (iVar1 != 0) {
        if (dv != (BIGNUM *)0x0) {
          bn_correct_top(dv);
        }
        if (rem != (BIGNUM *)0x0) {
          bn_correct_top(rem);
        }
      }
    }
  }
  else {
    ERR_new();
    iVar1 = 0;
    ERR_set_debug("../crypto/bn/bn_div.c",0xd7,"BN_div");
    ERR_set_error(3,0x67,0);
  }
  return iVar1;
}

