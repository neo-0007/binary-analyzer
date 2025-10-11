
int HMAC_Update(HMAC_CTX *ctx,uchar *data,size_t len)

{
  int iVar1;
  
  if (ctx->md != (EVP_MD *)0x0) {
    iVar1 = EVP_DigestUpdate((EVP_MD_CTX *)(ctx->md_ctx).digest,data,len);
    return iVar1;
  }
  return 0;
}

