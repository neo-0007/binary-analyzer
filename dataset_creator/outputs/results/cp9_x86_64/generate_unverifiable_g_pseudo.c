
undefined8
generate_unverifiable_g
          (BN_CTX *param_1,BN_MONT_CTX *param_2,BIGNUM *param_3,BIGNUM *param_4,BIGNUM *param_5,
          BIGNUM *param_6,BIGNUM *param_7,int *param_8)

{
  int iVar1;
  BIGNUM *b;
  int local_3c;
  
  iVar1 = BN_set_word(param_4,2);
  local_3c = 2;
  if (iVar1 != 0) {
    while (iVar1 = BN_mod_exp_mont(param_3,param_4,param_6,param_5,param_1,param_2), iVar1 != 0) {
      b = BN_value_one();
      iVar1 = BN_cmp(param_3,b);
      if (0 < iVar1) {
        *param_8 = local_3c;
        return 1;
      }
      iVar1 = BN_add_word(param_4,1);
      if (iVar1 == 0) {
        return 0;
      }
      iVar1 = BN_cmp(param_4,param_7);
      if (-1 < iVar1) {
        return 0;
      }
      local_3c = local_3c + 1;
    }
  }
  return 0;
}

