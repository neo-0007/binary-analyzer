
void aes_wrap_freectx(undefined8 param_1)

{
  ossl_cipher_generic_reset_ctx();
  CRYPTO_clear_free(param_1,0x1c0,"../providers/implementations/ciphers/cipher_aes_wrp.c",0x4a);
  return;
}

