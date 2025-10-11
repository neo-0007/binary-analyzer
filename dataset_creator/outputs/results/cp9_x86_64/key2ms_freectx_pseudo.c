
void key2ms_freectx(void *param_1)

{
  ossl_pw_clear_passphrase_data((long)param_1 + 0x10);
  CRYPTO_free(param_1);
  return;
}

