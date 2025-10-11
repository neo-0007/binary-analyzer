
code * BN_nist_mod_func(BIGNUM *param_1)

{
  int iVar1;
  code *pcVar2;
  
  iVar1 = BN_ucmp((BIGNUM *)ossl_bignum_nist_p_192,param_1);
  if (iVar1 == 0) {
    pcVar2 = BN_nist_mod_192;
  }
  else {
    iVar1 = BN_ucmp((BIGNUM *)ossl_bignum_nist_p_224,param_1);
    if (iVar1 == 0) {
      return BN_nist_mod_224;
    }
    iVar1 = BN_ucmp((BIGNUM *)ossl_bignum_nist_p_256,param_1);
    if (iVar1 == 0) {
      return BN_nist_mod_256;
    }
    iVar1 = BN_ucmp((BIGNUM *)ossl_bignum_nist_p_384,param_1);
    if (iVar1 == 0) {
      return BN_nist_mod_384;
    }
    iVar1 = BN_ucmp((BIGNUM *)ossl_bignum_nist_p_521,param_1);
    pcVar2 = (code *)0x0;
    if (iVar1 == 0) {
      return BN_nist_mod_521;
    }
  }
  return pcVar2;
}

