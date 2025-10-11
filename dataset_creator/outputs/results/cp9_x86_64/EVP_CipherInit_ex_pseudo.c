
int EVP_CipherInit_ex(EVP_CIPHER_CTX *ctx,EVP_CIPHER *cipher,ENGINE *impl,uchar *key,uchar *iv,
                     int enc)

{
  int iVar1;
  
  iVar1 = evp_cipher_init_internal();
  return iVar1;
}

