
int EVP_PKEY_paramgen_init(EVP_PKEY_CTX *ctx)

{
  int iVar1;
  
  iVar1 = gen_init(ctx,2);
  return iVar1;
}

