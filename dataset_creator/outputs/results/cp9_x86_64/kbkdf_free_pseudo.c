
void kbkdf_free(void *param_1)

{
  if (param_1 != (void *)0x0) {
    kbkdf_reset();
    CRYPTO_free(param_1);
    return;
  }
  return;
}

