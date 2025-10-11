
ulong ossl_rsa_check_public_exponent(BIGNUM *param_1)

{
  int iVar1;
  ulong uVar2;
  BIGNUM *b;
  
  uVar2 = BN_is_odd();
  if ((int)uVar2 == 0) {
    return uVar2;
  }
  b = BN_value_one();
  iVar1 = BN_cmp(param_1,b);
  return (ulong)(0 < iVar1);
}

