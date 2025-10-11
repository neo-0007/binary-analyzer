
bool enc_free(long param_1)

{
  long lVar1;
  
  if (param_1 != 0) {
    lVar1 = BIO_get_data();
    if (lVar1 != 0) {
      EVP_CIPHER_CTX_free(*(EVP_CIPHER_CTX **)(lVar1 + 0x18));
      CRYPTO_clear_free(lVar1,0x1150,"../crypto/evp/bio_enc.c",99);
      BIO_set_data(param_1,0);
      BIO_set_init(param_1,0);
    }
    return lVar1 != 0;
  }
  return false;
}

