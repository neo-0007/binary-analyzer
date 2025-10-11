
bool ossl_ffc_params_cmp(undefined8 *param_1,undefined8 *param_2,int param_3)

{
  int iVar1;
  
  iVar1 = BN_cmp((BIGNUM *)*param_1,(BIGNUM *)*param_2);
  if ((iVar1 == 0) && (iVar1 = BN_cmp((BIGNUM *)param_1[2],(BIGNUM *)param_2[2]), iVar1 == 0)) {
    if (param_3 != 0) {
      return true;
    }
    iVar1 = BN_cmp((BIGNUM *)param_1[1],(BIGNUM *)param_2[1]);
    return iVar1 == 0;
  }
  return false;
}

