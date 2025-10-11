
long * prov_drbg_nonce_ossl_ctx_new(void)

{
  long *ptr;
  long lVar1;
  long *plVar2;
  
  ptr = (long *)CRYPTO_zalloc(0x10,"../providers/implementations/rands/drbg.c",0x117);
  plVar2 = ptr;
  if (ptr != (long *)0x0) {
    lVar1 = CRYPTO_THREAD_lock_new();
    *ptr = lVar1;
    if (lVar1 == 0) {
      plVar2 = (long *)0x0;
      CRYPTO_free(ptr);
    }
  }
  return plVar2;
}

