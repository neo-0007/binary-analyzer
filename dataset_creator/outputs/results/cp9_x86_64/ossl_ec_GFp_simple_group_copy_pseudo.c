
undefined8 ossl_ec_GFp_simple_group_copy(long param_1,long param_2)

{
  BIGNUM *pBVar1;
  
  pBVar1 = BN_copy(*(BIGNUM **)(param_1 + 0x40),*(BIGNUM **)(param_2 + 0x40));
  if (pBVar1 != (BIGNUM *)0x0) {
    pBVar1 = BN_copy(*(BIGNUM **)(param_1 + 0x60),*(BIGNUM **)(param_2 + 0x60));
    if (pBVar1 != (BIGNUM *)0x0) {
      pBVar1 = BN_copy(*(BIGNUM **)(param_1 + 0x68),*(BIGNUM **)(param_2 + 0x68));
      if (pBVar1 != (BIGNUM *)0x0) {
        *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_2 + 0x70);
        return 1;
      }
    }
  }
  return 0;
}

