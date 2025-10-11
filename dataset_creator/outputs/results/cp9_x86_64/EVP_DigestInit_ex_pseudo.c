
int EVP_DigestInit_ex(EVP_MD_CTX *ctx,EVP_MD *type,ENGINE *impl)

{
  int iVar1;
  
  iVar1 = evp_md_init_internal(ctx,type,0,impl);
  return iVar1;
}

