
void sm2_freectx(void *param_1)

{
  EC_KEY_free(*(EC_KEY **)((long)param_1 + 8));
  ossl_prov_digest_reset((long)param_1 + 0x10);
  CRYPTO_free(param_1);
  return;
}

