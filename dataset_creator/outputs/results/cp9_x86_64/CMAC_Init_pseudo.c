
int CMAC_Init(CMAC_CTX *ctx,void *key,size_t keylen,EVP_CIPHER *cipher,ENGINE *impl)

{
  CMAC_CTX *out;
  int iVar1;
  uint inl;
  long lVar2;
  
  if (key == (void *)0x0 && cipher == (EVP_CIPHER *)0x0) {
    if (impl == (ENGINE *)0x0 && keylen == 0) {
      if (*(int *)(ctx + 0x88) == -1) {
        return 0;
      }
      iVar1 = EVP_EncryptInit_ex(*(EVP_CIPHER_CTX **)ctx,(EVP_CIPHER *)0x0,(ENGINE *)0x0,
                                 (uchar *)0x0,zero_iv_0);
      if (iVar1 == 0) {
        return 0;
      }
      iVar1 = EVP_CIPHER_CTX_get_block_size(*(undefined8 *)ctx);
      memset(ctx + 0x48,0,(long)iVar1);
      *(undefined4 *)(ctx + 0x88) = 0;
    }
  }
  else {
    if (cipher != (EVP_CIPHER *)0x0) {
      *(undefined4 *)(ctx + 0x88) = 0xffffffff;
      iVar1 = EVP_EncryptInit_ex(*(EVP_CIPHER_CTX **)ctx,cipher,impl,(uchar *)0x0,(uchar *)0x0);
      if (iVar1 == 0) {
        return 0;
      }
    }
    if (key != (void *)0x0) {
      *(undefined4 *)(ctx + 0x88) = 0xffffffff;
      lVar2 = EVP_CIPHER_CTX_get0_cipher(*(undefined8 *)ctx);
      if ((((lVar2 != 0) &&
           (iVar1 = EVP_CIPHER_CTX_set_key_length(*(EVP_CIPHER_CTX **)ctx,(int)keylen), iVar1 != 0))
          && (iVar1 = EVP_EncryptInit_ex(*(EVP_CIPHER_CTX **)ctx,(EVP_CIPHER *)0x0,(ENGINE *)0x0,
                                         (uchar *)key,zero_iv_0), iVar1 != 0)) &&
         (inl = EVP_CIPHER_CTX_get_block_size(*(undefined8 *)ctx), -1 < (int)inl)) {
        out = ctx + 0x48;
        iVar1 = EVP_Cipher(*(EVP_CIPHER_CTX **)ctx,(uchar *)out,zero_iv_0,inl);
        if (0 < iVar1) {
          make_kn(ctx + 8,out,inl);
          make_kn(ctx + 0x28,ctx + 8,inl);
          OPENSSL_cleanse(out,(long)(int)inl);
          iVar1 = EVP_EncryptInit_ex(*(EVP_CIPHER_CTX **)ctx,(EVP_CIPHER *)0x0,(ENGINE *)0x0,
                                     (uchar *)0x0,zero_iv_0);
          if (iVar1 != 0) {
            memset(out,0,(long)(int)inl);
            *(undefined4 *)(ctx + 0x88) = 0;
            return 1;
          }
        }
      }
      return 0;
    }
  }
  return 1;
}

