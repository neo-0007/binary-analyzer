
void cmac_free(void *param_1)

{
  if (param_1 != (void *)0x0) {
    CMAC_CTX_free(*(CMAC_CTX **)((long)param_1 + 8));
    ossl_prov_cipher_reset((long)param_1 + 0x10);
    CRYPTO_free(param_1);
    return;
  }
  return;
}

