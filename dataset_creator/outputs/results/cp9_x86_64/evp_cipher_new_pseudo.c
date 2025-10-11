
void * evp_cipher_new(void)

{
  void *ptr;
  long lVar1;
  void *pvVar2;
  
  ptr = (void *)CRYPTO_zalloc(0x100,"../crypto/evp/evp_enc.c",0x5b0);
  pvVar2 = ptr;
  if (ptr != (void *)0x0) {
    lVar1 = CRYPTO_THREAD_lock_new();
    *(long *)((long)ptr + 0x88) = lVar1;
    if (lVar1 == 0) {
      pvVar2 = (void *)0x0;
      CRYPTO_free(ptr);
    }
    else {
      LOCK();
      *(undefined4 *)((long)ptr + 0x80) = 1;
      UNLOCK();
    }
  }
  return pvVar2;
}

