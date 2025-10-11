
void * evp_md_new(void)

{
  void *ptr;
  long lVar1;
  void *pvVar2;
  
  ptr = (void *)CRYPTO_zalloc(0xf0,"../crypto/evp/digest.c",0x35f);
  pvVar2 = ptr;
  if (ptr != (void *)0x0) {
    lVar1 = CRYPTO_THREAD_lock_new();
    *(long *)((long)ptr + 0x80) = lVar1;
    if (lVar1 == 0) {
      pvVar2 = (void *)0x0;
      CRYPTO_free(ptr);
    }
    else {
      LOCK();
      *(undefined4 *)((long)ptr + 0x78) = 1;
      UNLOCK();
    }
  }
  return pvVar2;
}

