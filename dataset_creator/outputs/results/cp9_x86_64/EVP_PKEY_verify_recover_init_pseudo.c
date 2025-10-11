
int EVP_PKEY_verify_recover_init(EVP_PKEY_CTX *ctx)

{
  int iVar1;
  
  iVar1 = evp_pkey_signature_init(ctx,0x40,0);
  return iVar1;
}

