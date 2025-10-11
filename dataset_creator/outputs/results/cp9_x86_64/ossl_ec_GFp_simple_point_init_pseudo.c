
undefined8 ossl_ec_GFp_simple_point_init(long param_1)

{
  BIGNUM *pBVar1;
  
  pBVar1 = BN_new();
  *(BIGNUM **)(param_1 + 0x10) = pBVar1;
  pBVar1 = BN_new();
  *(BIGNUM **)(param_1 + 0x18) = pBVar1;
  pBVar1 = BN_new();
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(BIGNUM **)(param_1 + 0x20) = pBVar1;
  if (((*(BIGNUM **)(param_1 + 0x10) != (BIGNUM *)0x0) && (*(long *)(param_1 + 0x18) != 0)) &&
     (pBVar1 != (BIGNUM *)0x0)) {
    return 1;
  }
  BN_free(*(BIGNUM **)(param_1 + 0x10));
  BN_free(*(BIGNUM **)(param_1 + 0x18));
  BN_free(*(BIGNUM **)(param_1 + 0x20));
  return 0;
}

