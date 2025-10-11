
int RAND_set_rand_engine(ENGINE *engine)

{
  int iVar1;
  RAND_METHOD *pRVar2;
  
  iVar1 = CRYPTO_THREAD_run_once(&rand_init,do_rand_init_ossl_);
  if (iVar1 == 0) {
    return 0;
  }
  if (do_rand_init_ossl_ret_ == 0) {
    return 0;
  }
  if (engine == (ENGINE *)0x0) {
    pRVar2 = (RAND_METHOD *)0x0;
  }
  else {
    iVar1 = ENGINE_init(engine);
    if (iVar1 == 0) {
      return 0;
    }
    pRVar2 = ENGINE_get_RAND(engine);
    if (pRVar2 == (RAND_METHOD *)0x0) goto LAB_0042f620;
  }
  iVar1 = CRYPTO_THREAD_write_lock(rand_engine_lock);
  if (iVar1 != 0) {
    iVar1 = CRYPTO_THREAD_run_once(&rand_init,do_rand_init_ossl_);
    if (((iVar1 != 0) && (do_rand_init_ossl_ret_ != 0)) &&
       (iVar1 = CRYPTO_THREAD_write_lock(rand_meth_lock), iVar1 != 0)) {
      ENGINE_finish(funct_ref);
      default_RAND_meth = pRVar2;
      funct_ref = engine;
      CRYPTO_THREAD_unlock(rand_meth_lock);
    }
    CRYPTO_THREAD_unlock(rand_engine_lock);
    return 1;
  }
LAB_0042f620:
  ENGINE_finish(engine);
  return 0;
}

