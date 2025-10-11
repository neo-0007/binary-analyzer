
void ossl_rand_cleanup_int(void)

{
  if (rand_inited != 0) {
    if ((default_RAND_meth != 0) && (*(code **)(default_RAND_meth + 0x10) != (code *)0x0)) {
      (**(code **)(default_RAND_meth + 0x10))();
    }
    RAND_set_rand_method((RAND_METHOD *)0x0);
    ossl_rand_pool_cleanup();
    CRYPTO_THREAD_lock_free(rand_engine_lock);
    rand_engine_lock = 0;
    CRYPTO_THREAD_lock_free(rand_meth_lock);
    rand_meth_lock = 0;
    ossl_release_default_drbg_ctx();
    rand_inited = 0;
    return;
  }
  return;
}

