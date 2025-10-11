
void aes_ocb_freectx(long param_1)

{
  if (param_1 != 0) {
    CRYPTO_ocb128_cleanup(param_1 + 0x2b0);
    ossl_cipher_generic_reset_ctx(param_1);
    CRYPTO_clear_free(param_1,0x3b0,"../providers/implementations/ciphers/cipher_aes_ocb.c",0x14a);
    return;
  }
  return;
}

