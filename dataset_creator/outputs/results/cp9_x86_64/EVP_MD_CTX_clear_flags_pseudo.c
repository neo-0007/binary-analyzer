
void EVP_MD_CTX_clear_flags(EVP_MD_CTX *ctx,int flags)

{
  ctx->md_data = (void *)((ulong)ctx->md_data & (long)~flags);
  return;
}

