
void ossl_cleanup_thread(void)

{
  init_thread_deregister(0,1);
  CRYPTO_THREAD_cleanup_local(&destructor_key);
  destructor_key = 0xffffffffffffffff;
  return;
}

