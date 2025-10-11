
bool ossl_ec_GFp_nistp224_have_precompute_mult(long param_1)

{
  if (*(int *)(param_1 + 0x98) != 1) {
    return false;
  }
  return *(long *)(param_1 + 0xa0) != 0;
}

