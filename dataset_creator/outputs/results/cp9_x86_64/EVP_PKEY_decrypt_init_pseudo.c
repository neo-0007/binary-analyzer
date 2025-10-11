
int EVP_PKEY_decrypt_init(EVP_PKEY_CTX *ctx)

{
  int iVar1;
  
  iVar1 = evp_pkey_asym_cipher_init(ctx,0x400,0);
  return iVar1;
}

