
undefined8 afalg_destroy(void)

{
  if (error_loaded != 0) {
    ERR_unload_strings(lib_code,(ERR_STRING_DATA *)AFALG_str_reasons);
    error_loaded = 0;
  }
  EVP_CIPHER_meth_free(DAT_0092e248);
  DAT_0092e248 = 0;
  EVP_CIPHER_meth_free(DAT_0092e258);
  DAT_0092e258 = 0;
  EVP_CIPHER_meth_free(DAT_0092e268);
  DAT_0092e268 = 0;
  return 1;
}

