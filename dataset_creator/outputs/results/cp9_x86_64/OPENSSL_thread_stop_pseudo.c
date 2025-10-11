
void OPENSSL_thread_stop(void)

{
  void *ptr;
  
  if (destructor_key == -1) {
    return;
  }
  ptr = (void *)CRYPTO_THREAD_get_local(&destructor_key);
  CRYPTO_THREAD_set_local(&destructor_key,0);
  if (ptr != (void *)0x0) {
    init_thread_stop_part_0(0,ptr);
  }
  init_thread_remove_handlers(ptr);
  CRYPTO_free(ptr);
  return;
}

