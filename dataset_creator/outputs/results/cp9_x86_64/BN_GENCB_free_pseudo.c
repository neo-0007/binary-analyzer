
void BN_GENCB_free(void *param_1)

{
  if (param_1 != (void *)0x0) {
    CRYPTO_free(param_1);
    return;
  }
  return;
}

