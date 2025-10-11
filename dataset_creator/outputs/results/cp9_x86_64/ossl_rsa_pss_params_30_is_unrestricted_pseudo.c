
uint ossl_rsa_pss_params_30_is_unrestricted(long *param_1)

{
  uint uVar1;
  
  uVar1 = 1;
  if (param_1 != (long *)0x0) {
    if ((param_1[1] == pss_params_cmp_0._8_8_ && *param_1 == pss_params_cmp_0._0_8_) &&
       ((int)param_1[2] == pss_params_cmp_0._16_4_)) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
    uVar1 = uVar1 ^ 1;
  }
  return uVar1;
}

