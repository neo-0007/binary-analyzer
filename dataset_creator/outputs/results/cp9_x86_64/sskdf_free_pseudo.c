
void sskdf_free(void *param_1)

{
  if (param_1 != (void *)0x0) {
    sskdf_reset();
    CRYPTO_free(param_1);
    return;
  }
  return;
}

