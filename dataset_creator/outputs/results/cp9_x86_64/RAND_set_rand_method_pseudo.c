
int RAND_set_rand_method(RAND_METHOD *meth)

{
  int iVar1;
  
  iVar1 = CRYPTO_THREAD_run_once(&rand_init,do_rand_init_ossl_);
  if ((iVar1 != 0) && (do_rand_init_ossl_ret_ != 0)) {
    iVar1 = CRYPTO_THREAD_write_lock(rand_meth_lock);
    if (iVar1 != 0) {
      ENGINE_finish(funct_ref);
      funct_ref = (ENGINE *)0x0;
      default_RAND_meth = meth;
      CRYPTO_THREAD_unlock(rand_meth_lock);
      return 1;
    }
  }
  return 0;
}

