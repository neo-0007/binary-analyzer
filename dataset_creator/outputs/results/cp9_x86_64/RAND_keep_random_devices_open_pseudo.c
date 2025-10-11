
void RAND_keep_random_devices_open(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = CRYPTO_THREAD_run_once(&rand_init,do_rand_init_ossl_);
  if ((iVar1 != 0) && (do_rand_init_ossl_ret_ != 0)) {
    ossl_rand_pool_keep_random_devices_open(param_1);
    return;
  }
  return;
}

