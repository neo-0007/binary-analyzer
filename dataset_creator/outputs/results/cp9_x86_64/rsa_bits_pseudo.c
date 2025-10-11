
void rsa_bits(long param_1)

{
  BN_num_bits(*(BIGNUM **)(*(long *)(param_1 + 0x20) + 0x28));
  return;
}

