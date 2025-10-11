
uint ossl_rsa_sp800_56b_check_private(long param_1)

{
  int iVar1;
  uint uVar2;
  BIGNUM *b;
  
  if (*(long *)(param_1 + 0x38) == 0) {
    return 0;
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    b = BN_value_one();
    iVar1 = BN_cmp(*(BIGNUM **)(param_1 + 0x38),b);
    if (-1 < iVar1) {
      uVar2 = BN_cmp(*(BIGNUM **)(param_1 + 0x38),*(BIGNUM **)(param_1 + 0x28));
      return uVar2 >> 0x1f;
    }
  }
  return 0;
}

