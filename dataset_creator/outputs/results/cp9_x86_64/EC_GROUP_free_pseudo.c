
void EC_GROUP_free(EC_GROUP *group)

{
  if (group != (EC_GROUP *)0x0) {
    if (*(code **)(*(long *)group + 0x10) != (code *)0x0) {
      (**(code **)(*(long *)group + 0x10))();
    }
    EC_pre_comp_free(group);
    BN_MONT_CTX_free(*(BN_MONT_CTX **)(group + 0x90));
    EC_POINT_free(*(EC_POINT **)(group + 8));
    BN_free(*(BIGNUM **)(group + 0x10));
    BN_free(*(BIGNUM **)(group + 0x18));
    CRYPTO_free(*(void **)(group + 0x30));
    CRYPTO_free(*(void **)(group + 0xb0));
    CRYPTO_free(group);
    return;
  }
  return;
}

