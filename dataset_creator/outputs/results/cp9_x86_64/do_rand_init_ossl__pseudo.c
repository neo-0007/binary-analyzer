
void do_rand_init_ossl_(void)

{
  int iVar1;
  
  rand_engine_lock = CRYPTO_THREAD_lock_new();
  if (rand_engine_lock == 0) {
    do_rand_init_ossl_ret_ = 0;
    return;
  }
  rand_meth_lock = CRYPTO_THREAD_lock_new();
  if ((rand_meth_lock != 0) && (iVar1 = ossl_rand_pool_init(rand_meth_lock), iVar1 != 0)) {
    do_rand_init_ossl_ret_ = 1;
    rand_inited = 1;
    return;
  }
  CRYPTO_THREAD_lock_free(rand_meth_lock);
  rand_meth_lock = 0;
  CRYPTO_THREAD_lock_free(rand_engine_lock);
  rand_engine_lock = 0;
  do_rand_init_ossl_ret_ = 0;
  return;
}

