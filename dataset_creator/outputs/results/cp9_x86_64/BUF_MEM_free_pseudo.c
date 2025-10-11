
void BUF_MEM_free(BUF_MEM *a)

{
  char *pcVar1;
  
  if (a != (BUF_MEM *)0x0) {
    pcVar1 = a->data;
    if (pcVar1 != (char *)0x0) {
      if ((a[1].length & 1) == 0) {
        CRYPTO_clear_free(pcVar1,a->max,"../crypto/buffer/buffer.c",0x33);
      }
      else {
        CRYPTO_secure_clear_free(pcVar1,a->max,"../crypto/buffer/buffer.c",0x31);
      }
    }
    CRYPTO_free(a);
    return;
  }
  return;
}

