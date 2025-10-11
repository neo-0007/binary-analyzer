
EVP_CIPHER * EVP_CIPHER_CTX_cipher(EVP_CIPHER_CTX *ctx)

{
  if (ctx != (EVP_CIPHER_CTX *)0x0) {
    return ctx->cipher;
  }
  return (EVP_CIPHER *)0x0;
}

