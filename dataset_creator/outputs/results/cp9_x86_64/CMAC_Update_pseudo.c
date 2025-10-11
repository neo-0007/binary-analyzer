
int CMAC_Update(CMAC_CTX *ctx,void *data,size_t dlen)

{
  uint inl;
  int iVar1;
  ulong uVar2;
  
  if (*(int *)(ctx + 0x88) == -1) {
    return 0;
  }
  if (dlen != 0) {
    inl = EVP_CIPHER_CTX_get_block_size(*(undefined8 *)ctx);
    if ((int)inl < 0) {
      return 0;
    }
    iVar1 = *(int *)(ctx + 0x88);
    if (0 < iVar1) {
      uVar2 = (long)(int)(inl - iVar1);
      if (dlen < (ulong)(long)(int)(inl - iVar1)) {
        uVar2 = dlen;
      }
      memcpy(ctx + 0x68 + iVar1,data,uVar2);
      *(int *)(ctx + 0x88) = *(int *)(ctx + 0x88) + (int)uVar2;
      dlen = dlen - uVar2;
      if (dlen == 0) {
        return 1;
      }
      data = (void *)((long)data + uVar2);
      iVar1 = EVP_Cipher(*(EVP_CIPHER_CTX **)ctx,(uchar *)(ctx + 0x48),(uchar *)(ctx + 0x68),inl);
      if (iVar1 < 1) {
        return 0;
      }
    }
    uVar2 = (ulong)(int)inl;
    for (; uVar2 < dlen; dlen = dlen - uVar2) {
      iVar1 = EVP_Cipher(*(EVP_CIPHER_CTX **)ctx,(uchar *)(ctx + 0x48),(uchar *)data,inl);
      if (iVar1 < 1) {
        return 0;
      }
      data = (void *)((long)data + uVar2);
    }
    memcpy(ctx + 0x68,data,dlen);
    *(int *)(ctx + 0x88) = (int)dlen;
  }
  return 1;
}

