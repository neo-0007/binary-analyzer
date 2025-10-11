
int EVP_DigestInit(EVP_MD_CTX *ctx,EVP_MD *type)

{
  int iVar1;
  
  EVP_MD_CTX_reset();
  iVar1 = evp_md_init_internal(ctx,type,0,0);
  return iVar1;
}

