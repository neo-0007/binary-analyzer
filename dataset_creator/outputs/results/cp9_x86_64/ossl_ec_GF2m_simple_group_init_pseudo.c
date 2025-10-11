
undefined8 ossl_ec_GF2m_simple_group_init(long param_1)

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
    return 1;
  }
  BN_free(*(BIGNUM **)(param_1 + 0x40));
  BN_free(*(BIGNUM **)(param_1 + 0x60));
  BN_free(*(BIGNUM **)(param_1 + 0x68));
  return 0;
}

