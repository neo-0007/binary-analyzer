
int async_init(void)

{
  int iVar1;
  
  iVar1 = CRYPTO_THREAD_init_local(&ctxkey,0);
  if (iVar1 != 0) {
    iVar1 = CRYPTO_THREAD_init_local(&poolkey,0);
    if (iVar1 != 0) {
      return 1;
    }
    CRYPTO_THREAD_cleanup_local(&ctxkey);
    iVar1 = 0;
  }
  return iVar1;
}

