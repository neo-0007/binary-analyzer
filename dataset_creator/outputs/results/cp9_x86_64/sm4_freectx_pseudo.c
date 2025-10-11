
void sm4_freectx(undefined8 param_1)

{
  ossl_cipher_generic_reset_ctx();
  CRYPTO_clear_free(param_1,0x140,"../providers/implementations/ciphers/cipher_sm4.c",0x18);
  return;
}

