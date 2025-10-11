
void camellia_freectx(undefined8 param_1)

{
  ossl_cipher_generic_reset_ctx();
  CRYPTO_clear_free(param_1,0x1d8,"../providers/implementations/ciphers/cipher_camellia.c",0x1e);
  return;
}

