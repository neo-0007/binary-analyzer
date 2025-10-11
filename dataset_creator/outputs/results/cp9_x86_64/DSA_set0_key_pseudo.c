
undefined8 DSA_set0_key(long param_1,long param_2,long param_3)

{
  if (param_2 != 0) {
    BN_free(*(BIGNUM **)(param_1 + 0x68));
    *(long *)(param_1 + 0x68) = param_2;
  }
  if (param_3 != 0) {
    BN_free(*(BIGNUM **)(param_1 + 0x70));
    *(long *)(param_1 + 0x70) = param_3;
  }
  *(long *)(param_1 + 0xc0) = *(long *)(param_1 + 0xc0) + 1;
  return 1;
}

