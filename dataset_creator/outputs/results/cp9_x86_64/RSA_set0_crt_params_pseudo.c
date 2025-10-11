
undefined8 RSA_set0_crt_params(long param_1,long param_2,long param_3,long param_4)

{
  if (((*(BIGNUM **)(param_1 + 0x50) != (BIGNUM *)0x0 || param_2 != 0) &&
      (param_3 != 0 || *(long *)(param_1 + 0x58) != 0)) &&
     (param_4 != 0 || *(long *)(param_1 + 0x60) != 0)) {
    if (param_2 != 0) {
      BN_clear_free(*(BIGNUM **)(param_1 + 0x50));
      *(long *)(param_1 + 0x50) = param_2;
      BN_set_flags(param_2,4);
    }
    if (param_3 != 0) {
      BN_clear_free(*(BIGNUM **)(param_1 + 0x58));
      *(long *)(param_1 + 0x58) = param_3;
      BN_set_flags(param_3,4);
    }
    if (param_4 != 0) {
      BN_clear_free(*(BIGNUM **)(param_1 + 0x60));
      *(long *)(param_1 + 0x60) = param_4;
      BN_set_flags(param_4,4);
    }
    *(int *)(param_1 + 0xd8) = *(int *)(param_1 + 0xd8) + 1;
    return 1;
  }
  return 0;
}

