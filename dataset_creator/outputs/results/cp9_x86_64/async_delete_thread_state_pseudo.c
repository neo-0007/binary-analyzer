
void async_delete_thread_state(void)

{
  int iVar1;
  long *ptr;
  void *pvVar2;
  long lVar3;
  
  ptr = (long *)CRYPTO_THREAD_get_local(&poolkey);
  if (ptr != (long *)0x0) {
    lVar3 = *ptr;
    if (lVar3 != 0) {
      pvVar2 = (void *)OPENSSL_sk_pop();
      while (pvVar2 != (void *)0x0) {
        CRYPTO_free(*(void **)((long)pvVar2 + 0x3d0));
        async_fibre_free(pvVar2);
        CRYPTO_free(pvVar2);
        pvVar2 = (void *)OPENSSL_sk_pop(*ptr);
      }
      lVar3 = *ptr;
    }
    OPENSSL_sk_free(lVar3);
    CRYPTO_free(ptr);
    CRYPTO_THREAD_set_local(&poolkey,0);
  }
  async_local_cleanup();
  pvVar2 = (void *)async_get_ctx();
  iVar1 = CRYPTO_THREAD_set_local(&ctxkey,0);
  if (iVar1 != 0) {
    CRYPTO_free(pvVar2);
    return;
  }
  return;
}

