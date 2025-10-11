
void ossl_cipher_generic_reset_ctx(long param_1)

{
  if (param_1 == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x50) == 0) {
    return;
  }
  CRYPTO_free(*(void **)(param_1 + 0x48));
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  return;
}

