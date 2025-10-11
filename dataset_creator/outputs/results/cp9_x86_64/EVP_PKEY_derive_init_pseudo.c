
int EVP_PKEY_derive_init(EVP_PKEY_CTX *ctx)

{
  int iVar1;
  
  iVar1 = EVP_PKEY_derive_init_ex(ctx,0);
  return iVar1;
}

