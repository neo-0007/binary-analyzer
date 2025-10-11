
int CMAC_Final(CMAC_CTX *ctx,uchar *out,size_t *poutlen)

{
  uint uVar1;
  uint inl;
  int iVar2;
  long lVar3;
  
  if (*(int *)(ctx + 0x88) == -1) {
    return 0;
  }
  inl = EVP_CIPHER_CTX_get_block_size(*(undefined8 *)ctx);
  if (-1 < (int)inl) {
    if (poutlen != (size_t *)0x0) {
      *poutlen = (long)(int)inl;
    }
    if (out != (uchar *)0x0) {
      uVar1 = *(uint *)(ctx + 0x88);
      if (inl == uVar1) {
        if (0 < (int)inl) {
          lVar3 = 0;
          do {
            out[lVar3] = (byte)ctx[lVar3 + 0x68] ^ (byte)ctx[lVar3 + 8];
            lVar3 = lVar3 + 1;
          } while ((int)inl != lVar3);
        }
      }
      else {
        ctx[(long)(int)uVar1 + 0x68] = (CMAC_CTX)0x80;
        if (1 < (int)(inl - uVar1)) {
          memset(ctx + (long)(int)uVar1 + 0x69,0,(long)(int)((inl - uVar1) + -1));
        }
        if (0 < (int)inl) {
          lVar3 = 0;
          do {
            out[lVar3] = (byte)ctx[lVar3 + 0x68] ^ (byte)ctx[lVar3 + 0x28];
            lVar3 = lVar3 + 1;
          } while ((int)inl != lVar3);
        }
      }
      iVar2 = EVP_Cipher(*(EVP_CIPHER_CTX **)ctx,out,out,inl);
      if (iVar2 < 1) {
        OPENSSL_cleanse(out,(long)(int)inl);
        return 0;
      }
    }
    return 1;
  }
  return 0;
}

