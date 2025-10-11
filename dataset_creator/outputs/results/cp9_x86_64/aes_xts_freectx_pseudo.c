
void aes_xts_freectx(undefined8 param_1)

{
  ossl_cipher_generic_reset_ctx();
  CRYPTO_clear_free(param_1,0x2d8,"../providers/implementations/ciphers/cipher_aes_xts.c",0x81);
  return;
}

