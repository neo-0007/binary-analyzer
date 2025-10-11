
void chacha20_freectx(long param_1)

{
  if (param_1 != 0) {
    ossl_cipher_generic_reset_ctx();
    CRYPTO_clear_free(param_1,0x138,"../providers/implementations/ciphers/cipher_chacha20.c",0x3f);
    return;
  }
  return;
}

