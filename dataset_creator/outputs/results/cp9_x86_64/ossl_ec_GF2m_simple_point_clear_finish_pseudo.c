
void ossl_ec_GF2m_simple_point_clear_finish(long param_1)

{
  BN_clear_free(*(BIGNUM **)(param_1 + 0x10));
  BN_clear_free(*(BIGNUM **)(param_1 + 0x18));
  BN_clear_free(*(BIGNUM **)(param_1 + 0x20));
  *(undefined4 *)(param_1 + 0x28) = 0;
  return;
}

