
void gmac_free(void *param_1)

{
  if (param_1 != (void *)0x0) {
    EVP_CIPHER_CTX_free(*(EVP_CIPHER_CTX **)((long)param_1 + 8));
    ossl_prov_cipher_reset((long)param_1 + 0x10);
    CRYPTO_free(param_1);
    return;
  }
  return;
}

