
bool ossl_ec_wNAF_have_precompute_mult(long param_1)

{
  if (*(int *)(param_1 + 0x98) != 5) {
    return false;
  }
  return *(long *)(param_1 + 0xa0) != 0;
}

