
int EVP_CipherInit(EVP_CIPHER_CTX *ctx,EVP_CIPHER *cipher,uchar *key,uchar *iv,int enc)

{
  int iVar1;
  
  if (cipher != (EVP_CIPHER *)0x0) {
    EVP_CIPHER_CTX_reset();
  }
  iVar1 = evp_cipher_init_internal(ctx,cipher,0,key,iv,enc,0);
  return iVar1;
}

