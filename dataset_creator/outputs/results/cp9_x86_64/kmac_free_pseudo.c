
void kmac_free(void *param_1)

{
  if (param_1 != (void *)0x0) {
    EVP_MD_CTX_free(*(undefined8 *)((long)param_1 + 8));
    ossl_prov_digest_reset((long)param_1 + 0x10);
    OPENSSL_cleanse((void *)((long)param_1 + 0x44),*(size_t *)((long)param_1 + 0x30));
    OPENSSL_cleanse((void *)((long)param_1 + 0x194),*(size_t *)((long)param_1 + 0x38));
    CRYPTO_free(param_1);
    return;
  }
  return;
}

