
void ossl_tdes_freectx(undefined8 param_1)

{
  ossl_cipher_generic_reset_ctx();
  CRYPTO_clear_free(param_1,0x248,"../providers/implementations/ciphers/cipher_tdes_common.c",0x3d);
  return;
}

