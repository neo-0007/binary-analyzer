
undefined8
bn_rsa_fips186_4_find_aux_prob_prime
          (BIGNUM *param_1,BIGNUM *param_2,undefined8 param_3,BN_GENCB *param_4)

{
  int iVar1;
  BIGNUM *pBVar2;
  int b;
  
  pBVar2 = BN_copy(param_2,param_1);
  if (pBVar2 != (BIGNUM *)0x0) {
    b = 0;
    BN_set_flags(param_2);
    do {
      b = b + 1;
      BN_GENCB_call(param_4,0,b);
      iVar1 = BN_check_prime(param_2,param_3,param_4);
      if (0 < iVar1) {
        BN_GENCB_call(param_4,2,b);
        return 1;
      }
      if (iVar1 != 0) {
        return 0;
      }
      iVar1 = BN_add_word(param_2,2);
    } while (iVar1 != 0);
  }
  return 0;
}

