
void chacha20_poly1305_freectx(long param_1)

{
  if (param_1 != 0) {
    ossl_cipher_generic_reset_ctx();
    CRYPTO_clear_free(param_1,0x358,
                      "../providers/implementations/ciphers/cipher_chacha20_poly1305.c",0x45);
    return;
  }
  return;
}

