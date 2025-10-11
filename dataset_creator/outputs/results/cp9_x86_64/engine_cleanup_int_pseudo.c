
void engine_cleanup_int(void)

{
  if (cleanup_stack != 0) {
    OPENSSL_sk_pop_free(cleanup_stack,engine_cleanup_cb_free);
    cleanup_stack = 0;
  }
  CRYPTO_THREAD_lock_free(global_engine_lock);
  global_engine_lock = 0;
  return;
}

