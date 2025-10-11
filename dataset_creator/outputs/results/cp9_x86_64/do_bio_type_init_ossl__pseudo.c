
void do_bio_type_init_ossl_(void)

{
  bio_type_lock = CRYPTO_THREAD_lock_new();
  do_bio_type_init_ossl_ret_ = (uint)(bio_type_lock != 0);
  return;
}

