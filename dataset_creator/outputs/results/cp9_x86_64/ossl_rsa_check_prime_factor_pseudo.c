
bool ossl_rsa_check_prime_factor(BIGNUM *param_1,BIGNUM *param_2,undefined4 param_3,BN_CTX *param_4)

{
  int iVar1;
  BIGNUM *a;
  BIGNUM *r;
  BIGNUM *pBVar2;
  bool bVar3;
  
  iVar1 = BN_check_prime(param_1,param_4,0);
  if (iVar1 != 1) {
    return false;
  }
  iVar1 = ossl_rsa_check_prime_factor_range(param_1,param_3,param_4);
  if (iVar1 != 1) {
    return false;
  }
  BN_CTX_start(param_4);
  a = BN_CTX_get(param_4);
  r = BN_CTX_get(param_4);
  if (r != (BIGNUM *)0x0) {
    BN_set_flags(a,4);
    BN_set_flags(r,4);
    pBVar2 = BN_copy(a,param_1);
    if (((pBVar2 != (BIGNUM *)0x0) && (iVar1 = BN_sub_word(a,1), iVar1 != 0)) &&
       (iVar1 = BN_gcd(r,a,param_2,param_4), iVar1 != 0)) {
      iVar1 = BN_is_one(r);
      bVar3 = iVar1 != 0;
      goto LAB_0055d162;
    }
  }
  bVar3 = false;
LAB_0055d162:
  BN_clear(a);
  BN_CTX_end(param_4);
  return bVar3;
}

