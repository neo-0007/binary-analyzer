
bool ossl_rsa_check_prime_factor_range(BIGNUM *param_1,int param_2,BN_CTX *param_3)

{
  int iVar1;
  int iVar2;
  BIGNUM *a;
  BIGNUM *pBVar3;
  bool bVar4;
  
  iVar1 = BN_num_bits((BIGNUM *)ossl_bn_inv_sqrt_2);
  iVar2 = BN_num_bits(param_1);
  if (iVar2 != param_2 >> 1) {
    return false;
  }
  BN_CTX_start(param_3);
  a = BN_CTX_get(param_3);
  if ((a != (BIGNUM *)0x0) &&
     (pBVar3 = BN_copy(a,(BIGNUM *)ossl_bn_inv_sqrt_2), pBVar3 != (BIGNUM *)0x0)) {
    if (iVar2 - iVar1 < 0) {
      iVar1 = BN_rshift(a,a,iVar1 - iVar2);
    }
    else {
      iVar1 = BN_lshift(a,a,iVar2 - iVar1);
    }
    if (iVar1 != 0) {
      iVar1 = BN_cmp(param_1,a);
      bVar4 = 0 < iVar1;
      goto LAB_0055d06b;
    }
  }
  bVar4 = false;
LAB_0055d06b:
  BN_CTX_end(param_3);
  return bVar4;
}

