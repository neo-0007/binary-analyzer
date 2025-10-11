
int EVP_Digest(void *data,size_t count,uchar *md,uint *size,EVP_MD *type,ENGINE *impl)

{
  int iVar1;
  uint uVar2;
  EVP_MD_CTX *ctx;
  
  ctx = (EVP_MD_CTX *)EVP_MD_CTX_new();
  if (ctx != (EVP_MD_CTX *)0x0) {
    EVP_MD_CTX_set_flags(ctx,1);
    iVar1 = EVP_DigestInit_ex(ctx,type,impl);
    if ((iVar1 == 0) || (iVar1 = EVP_DigestUpdate(ctx,data,count), iVar1 == 0)) {
      uVar2 = 0;
    }
    else {
      iVar1 = EVP_DigestFinal_ex(ctx,md,size);
      uVar2 = (uint)(iVar1 != 0);
    }
    EVP_MD_CTX_free(ctx);
    return uVar2;
  }
  return 0;
}

