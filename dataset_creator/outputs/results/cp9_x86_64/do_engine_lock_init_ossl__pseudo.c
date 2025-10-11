
void do_engine_lock_init_ossl_(void)

{
  global_engine_lock = CRYPTO_THREAD_lock_new();
  do_engine_lock_init_ossl_ret_ = (uint)(global_engine_lock != 0);
  return;
}

