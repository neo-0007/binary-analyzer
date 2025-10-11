
undefined4 * core_bio_new(void)

{
  undefined4 *ptr;
  long lVar1;
  
  ptr = (undefined4 *)CRYPTO_malloc(0x18,"../crypto/bio/ossl_core_bio.c",0x1a);
  if (ptr != (undefined4 *)0x0) {
    lVar1 = CRYPTO_THREAD_lock_new();
    *(long *)(ptr + 2) = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *ptr = 1;
      UNLOCK();
      return ptr;
    }
  }
  CRYPTO_free(ptr);
  return (undefined4 *)0x0;
}

