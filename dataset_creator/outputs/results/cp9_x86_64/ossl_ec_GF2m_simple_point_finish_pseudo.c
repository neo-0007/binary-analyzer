
void ossl_ec_GF2m_simple_point_finish(long param_1)

{
  BN_free(*(BIGNUM **)(param_1 + 0x10));
  BN_free(*(BIGNUM **)(param_1 + 0x18));
  BN_free(*(BIGNUM **)(param_1 + 0x20));
  return;
}

