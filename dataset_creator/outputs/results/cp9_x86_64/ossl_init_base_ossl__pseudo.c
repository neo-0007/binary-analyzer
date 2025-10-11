
void ossl_init_base_ossl_(void)

{
  int iVar1;
  
  init_lock = CRYPTO_THREAD_lock_new();
  if (init_lock != 0) {
    OPENSSL_cpuid_setup(init_lock);
    iVar1 = ossl_init_thread();
    if ((iVar1 != 0) && (iVar1 = CRYPTO_THREAD_init_local(&in_init_config_local,0), iVar1 != 0)) {
      base_inited = 1;
      ossl_init_base_ossl_ret_ = 1;
      return;
    }
  }
  CRYPTO_THREAD_lock_free(init_lock);
  init_lock = 0;
  ossl_init_base_ossl_ret_ = 0;
  return;
}

