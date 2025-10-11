
void aes_cbc_hmac_sha1_freectx(long param_1)

{
  if (param_1 != 0) {
    ossl_cipher_generic_reset_ctx();
    CRYPTO_clear_free(param_1,0x318,"../providers/implementations/ciphers/cipher_aes_cbc_hmac_sha.c"
                      ,0x157);
    return;
  }
  return;
}

