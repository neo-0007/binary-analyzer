
undefined8 ossl_ec_GFp_mont_group_copy(long param_1,long param_2)

{
  int iVar1;
  BN_MONT_CTX *pBVar2;
  BIGNUM *pBVar3;
  
  BN_MONT_CTX_free(*(BN_MONT_CTX **)(param_1 + 0x78));
  *(undefined8 *)(param_1 + 0x78) = 0;
  BN_clear_free(*(BIGNUM **)(param_1 + 0x80));
  *(undefined8 *)(param_1 + 0x80) = 0;
  iVar1 = ossl_ec_GFp_simple_group_copy(param_1,param_2);
  if (iVar1 == 0) {
    return 0;
  }
  if (*(long *)(param_2 + 0x78) != 0) {
    pBVar2 = BN_MONT_CTX_new();
    *(BN_MONT_CTX **)(param_1 + 0x78) = pBVar2;
    if (pBVar2 == (BN_MONT_CTX *)0x0) {
      return 0;
    }
    pBVar2 = BN_MONT_CTX_copy(pBVar2,*(BN_MONT_CTX **)(param_2 + 0x78));
    if (pBVar2 == (BN_MONT_CTX *)0x0) goto LAB_004ebf30;
  }
  if (*(BIGNUM **)(param_2 + 0x80) == (BIGNUM *)0x0) {
    return 1;
  }
  pBVar3 = BN_dup(*(BIGNUM **)(param_2 + 0x80));
  *(BIGNUM **)(param_1 + 0x80) = pBVar3;
  if (pBVar3 != (BIGNUM *)0x0) {
    return 1;
  }
LAB_004ebf30:
  BN_MONT_CTX_free(*(BN_MONT_CTX **)(param_1 + 0x78));
  *(undefined8 *)(param_1 + 0x78) = 0;
  return 0;
}

