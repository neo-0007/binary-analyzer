
void free_string(int *param_1)

{
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    CRYPTO_free(*(void **)(param_1 + 2));
    if (*param_1 == 3) {
      CRYPTO_free(*(void **)(param_1 + 10));
      CRYPTO_free(*(void **)(param_1 + 0xc));
      CRYPTO_free(*(void **)(param_1 + 0xe));
    }
  }
  CRYPTO_free(param_1);
  return;
}

