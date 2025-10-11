
int DSA_bits(long param_1)

{
  int iVar1;
  
  if (*(BIGNUM **)(param_1 + 8) != (BIGNUM *)0x0) {
    iVar1 = BN_num_bits(*(BIGNUM **)(param_1 + 8));
    return iVar1;
  }
  return -1;
}

