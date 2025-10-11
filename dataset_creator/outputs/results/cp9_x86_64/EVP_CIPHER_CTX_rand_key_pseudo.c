
int EVP_CIPHER_CTX_rand_key(EVP_CIPHER_CTX *ctx,uchar *key)

{
  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  
  if ((ctx->cipher->flags & 0x200) == 0) {
    uVar2 = EVP_CIPHER_get0_provider();
    uVar2 = ossl_provider_libctx(uVar2);
    iVar1 = EVP_CIPHER_CTX_get_key_length(ctx);
    uVar3 = 0;
    if (0 < iVar1) {
      iVar1 = RAND_priv_bytes_ex(uVar2,key,(long)iVar1,0);
      uVar3 = (uint)(0 < iVar1);
    }
    return uVar3;
  }
  iVar1 = EVP_CIPHER_CTX_ctrl(ctx,6,0,key);
  return iVar1;
}

