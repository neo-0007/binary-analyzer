
int EVP_MD_CTX_test_flags(EVP_MD_CTX *ctx,int flags)

{
  return *(uint *)&ctx->md_data & flags;
}

