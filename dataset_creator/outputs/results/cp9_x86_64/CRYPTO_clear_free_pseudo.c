
void CRYPTO_clear_free(void *param_1,size_t param_2)

{
  if (param_1 != (void *)0x0) {
    if (param_2 != 0) {
      OPENSSL_cleanse(param_1,param_2);
    }
    CRYPTO_free(param_1);
    return;
  }
  return;
}

