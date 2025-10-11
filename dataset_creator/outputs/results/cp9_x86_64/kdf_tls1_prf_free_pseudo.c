
void kdf_tls1_prf_free(void *param_1)

{
  if (param_1 != (void *)0x0) {
    kdf_tls1_prf_reset();
    CRYPTO_free(param_1);
    return;
  }
  return;
}

