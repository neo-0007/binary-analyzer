
bool ossl_ec_GF2m_simple_group_get_curve
               (long param_1,BIGNUM *param_2,BIGNUM *param_3,BIGNUM *param_4)

{
  BIGNUM *pBVar1;
  bool bVar2;
  
  if ((param_2 != (BIGNUM *)0x0) &&
     (pBVar1 = BN_copy(param_2,*(BIGNUM **)(param_1 + 0x40)), pBVar1 == (BIGNUM *)0x0)) {
    return false;
  }
  if ((param_3 != (BIGNUM *)0x0) &&
     (pBVar1 = BN_copy(param_3,*(BIGNUM **)(param_1 + 0x60)), pBVar1 == (BIGNUM *)0x0)) {
    return false;
  }
  bVar2 = true;
  if (param_4 != (BIGNUM *)0x0) {
    pBVar1 = BN_copy(param_4,*(BIGNUM **)(param_1 + 0x68));
    bVar2 = pBVar1 != (BIGNUM *)0x0;
  }
  return bVar2;
}

