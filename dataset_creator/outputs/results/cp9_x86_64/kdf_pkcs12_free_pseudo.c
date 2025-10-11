
void kdf_pkcs12_free(void *param_1)

{
  if (param_1 != (void *)0x0) {
    kdf_pkcs12_cleanup();
    CRYPTO_free(param_1);
    return;
  }
  return;
}

