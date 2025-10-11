
void CTLOG_free(void *param_1)

{
  if (param_1 != (void *)0x0) {
    CRYPTO_free(*(void **)((long)param_1 + 0x10));
    EVP_PKEY_free(*(EVP_PKEY **)((long)param_1 + 0x38));
    CRYPTO_free(*(void **)((long)param_1 + 8));
    CRYPTO_free(param_1);
    return;
  }
  return;
}

