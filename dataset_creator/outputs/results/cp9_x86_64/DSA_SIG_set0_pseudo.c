
bool DSA_SIG_set0(long *param_1,long param_2,long param_3)

{
  if (param_2 != 0) {
    if (param_3 != 0) {
      BN_clear_free((BIGNUM *)*param_1);
      BN_clear_free((BIGNUM *)param_1[1]);
      *param_1 = param_2;
      param_1[1] = param_3;
    }
    return param_3 != 0;
  }
  return false;
}

