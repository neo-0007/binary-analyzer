
int BN_is_prime_ex(BIGNUM *p,int nchecks,BN_CTX *ctx,BN_GENCB *cb)

{
  int iVar1;
  
  iVar1 = ossl_bn_check_prime();
  return iVar1;
}

