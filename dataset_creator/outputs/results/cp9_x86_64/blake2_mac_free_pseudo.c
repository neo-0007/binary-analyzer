
void blake2_mac_free(void *param_1)

{
  if (param_1 != (void *)0x0) {
    OPENSSL_cleanse((void *)((long)param_1 + 0xa0),0x20);
    CRYPTO_free(param_1);
    return;
  }
  return;
}

