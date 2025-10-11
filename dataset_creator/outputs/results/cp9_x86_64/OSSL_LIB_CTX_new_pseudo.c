
long * OSSL_LIB_CTX_new(void)

{
  int iVar1;
  long *ptr;
  long lVar2;
  
  ptr = (long *)CRYPTO_zalloc(0x1c8,"../crypto/context.c",0xc0);
  if (ptr == (long *)0x0) {
    return (long *)0x0;
  }
  lVar2 = CRYPTO_THREAD_lock_new();
  *ptr = lVar2;
  if ((lVar2 != 0) && (iVar1 = context_init_part_0(ptr), iVar1 != 0)) {
    return ptr;
  }
  CRYPTO_free(ptr);
  return (long *)0x0;
}

