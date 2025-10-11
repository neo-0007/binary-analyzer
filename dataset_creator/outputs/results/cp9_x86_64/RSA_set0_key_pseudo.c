
undefined8 RSA_set0_key(long param_1,BIGNUM *param_2,long param_3,long param_4)

{
  if (*(BIGNUM **)(param_1 + 0x28) == (BIGNUM *)0x0) {
    if ((param_2 == (BIGNUM *)0x0) || ((*(long *)(param_1 + 0x30) == 0 && (param_3 == 0)))) {
      return 0;
    }
LAB_005574f0:
    BN_free(*(BIGNUM **)(param_1 + 0x28));
    *(BIGNUM **)(param_1 + 0x28) = param_2;
joined_r0x005574fc:
    if (param_3 == 0) goto LAB_005574a8;
    param_2 = *(BIGNUM **)(param_1 + 0x30);
  }
  else {
    if (*(long *)(param_1 + 0x30) != 0) {
      if (param_2 != (BIGNUM *)0x0) goto LAB_005574f0;
      goto joined_r0x005574fc;
    }
    if (param_3 == 0) {
      return 0;
    }
    if (param_2 != (BIGNUM *)0x0) goto LAB_005574f0;
  }
  BN_free(param_2);
  *(long *)(param_1 + 0x30) = param_3;
LAB_005574a8:
  if (param_4 != 0) {
    BN_clear_free(*(BIGNUM **)(param_1 + 0x38));
    *(long *)(param_1 + 0x38) = param_4;
    BN_set_flags(param_4,4);
  }
  *(int *)(param_1 + 0xd8) = *(int *)(param_1 + 0xd8) + 1;
  return 1;
}

