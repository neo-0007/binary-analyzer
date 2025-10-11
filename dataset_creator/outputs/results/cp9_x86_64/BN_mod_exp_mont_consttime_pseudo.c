
int BN_mod_exp_mont_consttime
              (BIGNUM *rr,BIGNUM *a,BIGNUM *p,BIGNUM *m,BN_CTX *ctx,BN_MONT_CTX *in_mont)

{
  int iVar1;
  
  iVar1 = bn_mod_exp_mont_fixed_top();
  if (iVar1 == 0) {
    return 0;
  }
  bn_correct_top(rr);
  return 1;
}

