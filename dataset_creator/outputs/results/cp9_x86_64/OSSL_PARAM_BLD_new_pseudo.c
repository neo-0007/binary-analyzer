
void * OSSL_PARAM_BLD_new(void)

{
  void *ptr;
  long lVar1;
  void *pvVar2;
  
  ptr = (void *)CRYPTO_zalloc(0x18,"../crypto/param_build.c",0x5d);
  pvVar2 = ptr;
  if (ptr != (void *)0x0) {
    lVar1 = OPENSSL_sk_new_null();
    *(long *)((long)ptr + 0x10) = lVar1;
    if (lVar1 == 0) {
      pvVar2 = (void *)0x0;
      CRYPTO_free(ptr);
    }
  }
  return pvVar2;
}

