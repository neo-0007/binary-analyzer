
void ossl_init_load_crypto_strings_ossl_(void)

{
  ossl_init_load_crypto_strings_ossl_ret_ = ossl_err_load_crypto_strings();
  load_crypto_strings_inited = 1;
  return;
}

