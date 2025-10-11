
int CMAC_CTX_copy(CMAC_CTX *out,CMAC_CTX *in)

{
  int iVar1;
  size_t __n;
  
  if (*(int *)(in + 0x88) == -1) {
    return 0;
  }
  iVar1 = EVP_CIPHER_CTX_get_block_size(*(undefined8 *)in);
  __n = (size_t)iVar1;
  if (-1 < iVar1) {
    iVar1 = EVP_CIPHER_CTX_copy(*(EVP_CIPHER_CTX **)out,*(EVP_CIPHER_CTX **)in);
    if (iVar1 != 0) {
      memcpy(out + 8,in + 8,__n);
      memcpy(out + 0x28,in + 0x28,__n);
      memcpy(out + 0x48,in + 0x48,__n);
      memcpy(out + 0x68,in + 0x68,__n);
      *(undefined4 *)(out + 0x88) = *(undefined4 *)(in + 0x88);
      return 1;
    }
  }
  return 0;
}

