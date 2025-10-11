
void ossl_rsa_multip_info_free_ex(void *param_1)

{
  BN_clear_free(*(BIGNUM **)((long)param_1 + 0x18));
  CRYPTO_free(param_1);
  return;
}

