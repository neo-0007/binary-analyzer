
bool ossl_rsa_get_lcm(BN_CTX *param_1,BIGNUM *param_2,BIGNUM *param_3,BIGNUM *param_4,
                     BIGNUM *param_5,BIGNUM *param_6,BIGNUM *param_7,BIGNUM *param_8)

{
  int iVar1;
  BIGNUM *pBVar2;
  
  pBVar2 = BN_value_one();
  iVar1 = BN_sub(param_6,param_2,pBVar2);
  if (iVar1 != 0) {
    pBVar2 = BN_value_one();
    iVar1 = BN_sub(param_7,param_3,pBVar2);
    if (((iVar1 != 0) && (iVar1 = BN_mul(param_8,param_6,param_7,param_1), iVar1 != 0)) &&
       (iVar1 = BN_gcd(param_5,param_6,param_7,param_1), iVar1 != 0)) {
      iVar1 = BN_div(param_4,(BIGNUM *)0x0,param_8,param_5,param_1);
      return iVar1 != 0;
    }
  }
  return false;
}

