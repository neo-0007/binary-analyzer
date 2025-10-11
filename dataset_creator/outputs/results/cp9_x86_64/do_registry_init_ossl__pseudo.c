
void do_registry_init_ossl_(void)

{
  registry_lock = CRYPTO_THREAD_lock_new();
  do_registry_init_ossl_ret_ = (uint)(registry_lock != 0);
  return;
}

