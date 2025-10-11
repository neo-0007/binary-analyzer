
int EVP_PKEY_sign_init(EVP_PKEY_CTX *ctx)

{
  int iVar1;
  
  iVar1 = evp_pkey_signature_init(ctx,0x10,0);
  return iVar1;
}

