
undefined8 ossl_ec_GFp_simple_group_init(long param_1)

{
  BIGNUM *pBVar1;
  
  pBVar1 = BN_new();
  *(BIGNUM **)(param_1 + 0x40) = pBVar1;
  pBVar1 = BN_new();
  *(BIGNUM **)(param_1 + 0x60) = pBVar1;
  pBVar1 = BN_new();
  *(BIGNUM **)(param_1 + 0x68) = pBVar1;
  if (((*(BIGNUM **)(param_1 + 0x40) != (BIGNUM *)0x0) && (*(long *)(param_1 + 0x60) != 0)) &&
     (pBVar1 != (BIGNUM *)0x0)) {
    *(undefined4 *)(param_1 + 0x70) = 0;
    return 1;
  }
  BN_free(*(BIGNUM **)(param_1 + 0x40));
  BN_free(*(BIGNUM **)(param_1 + 0x60));
  BN_free(*(BIGNUM **)(param_1 + 0x68));
  return 0;
}

