
undefined8 RSA_set0_factors(long param_1,BIGNUM *param_2,long param_3)

{
  if (*(BIGNUM **)(param_1 + 0x40) == (BIGNUM *)0x0) {
    if ((param_2 == (BIGNUM *)0x0) || ((*(long *)(param_1 + 0x48) == 0 && (param_3 == 0)))) {
      return 0;
    }
LAB_00557580:
    BN_clear_free(*(BIGNUM **)(param_1 + 0x40));
    *(BIGNUM **)(param_1 + 0x40) = param_2;
    BN_set_flags(param_2,4);
joined_r0x00557599:
    if (param_3 == 0) goto LAB_0055755b;
    param_2 = *(BIGNUM **)(param_1 + 0x48);
  }
  else {
    if (*(long *)(param_1 + 0x48) != 0) {
      if (param_2 != (BIGNUM *)0x0) goto LAB_00557580;
      goto joined_r0x00557599;
    }
    if (param_3 == 0) {
      return 0;
    }
    if (param_2 != (BIGNUM *)0x0) goto LAB_00557580;
  }
  BN_clear_free(param_2);
  *(long *)(param_1 + 0x48) = param_3;
  BN_set_flags(param_3,4);
LAB_0055755b:
  *(int *)(param_1 + 0xd8) = *(int *)(param_1 + 0xd8) + 1;
  return 1;
}

