
BIGNUM * bn_wexpand(BIGNUM *param_1,int param_2)

{
  BIGNUM *pBVar1;
  
  if (param_2 <= param_1->dmax) {
    return param_1;
  }
  pBVar1 = bn_expand2(param_1,param_2);
  return pBVar1;
}

