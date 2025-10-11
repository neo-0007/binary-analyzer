
void EVP_CIPHER_CTX_free(EVP_CIPHER_CTX *a)

{
  if (a != (EVP_CIPHER_CTX *)0x0) {
    EVP_CIPHER_CTX_reset();
    CRYPTO_free(a);
    return;
  }
  return;
}

