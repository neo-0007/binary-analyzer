
int EVP_CIPHER_CTX_test_flags(EVP_CIPHER_CTX *ctx,int flags)

{
  return (uint)ctx->flags & flags;
}

