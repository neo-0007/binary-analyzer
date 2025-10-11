
undefined8 ossl_ec_GFp_simple_point_copy(long param_1,long param_2)

{
  BIGNUM *pBVar1;
  
  pBVar1 = BN_copy(*(BIGNUM **)(param_1 + 0x10),*(BIGNUM **)(param_2 + 0x10));
  if (pBVar1 != (BIGNUM *)0x0) {
    pBVar1 = BN_copy(*(BIGNUM **)(param_1 + 0x18),*(BIGNUM **)(param_2 + 0x18));
    if (pBVar1 != (BIGNUM *)0x0) {
      pBVar1 = BN_copy(*(BIGNUM **)(param_1 + 0x20),*(BIGNUM **)(param_2 + 0x20));
      if (pBVar1 != (BIGNUM *)0x0) {
        *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
        *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
        return 1;
      }
    }
  }
  return 0;
}

