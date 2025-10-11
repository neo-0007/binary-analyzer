
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

RAND_METHOD * RAND_get_rand_method(void)

{
  int iVar1;
  ENGINE *e;
  RAND_METHOD *pRVar2;
  
  iVar1 = CRYPTO_THREAD_run_once(&rand_init,do_rand_init_ossl_);
  if (((iVar1 != 0) && (do_rand_init_ossl_ret_ != 0)) &&
     (iVar1 = CRYPTO_THREAD_write_lock(rand_meth_lock), iVar1 != 0)) {
    pRVar2 = (RAND_METHOD *)default_RAND_meth;
    e = funct_ref;
    if (((RAND_METHOD *)default_RAND_meth == (RAND_METHOD *)0x0) &&
       ((e = ENGINE_get_default_RAND(), e == (ENGINE *)0x0 ||
        (pRVar2 = ENGINE_get_RAND(e), pRVar2 == (RAND_METHOD *)0x0)))) {
      ENGINE_finish(e);
      default_RAND_meth = ossl_rand_meth;
      pRVar2 = (RAND_METHOD *)default_RAND_meth;
      e = funct_ref;
    }
    funct_ref = e;
    default_RAND_meth = (undefined1 *)pRVar2;
    pRVar2 = (RAND_METHOD *)default_RAND_meth;
    CRYPTO_THREAD_unlock(rand_meth_lock);
    return pRVar2;
  }
  return (RAND_METHOD *)0x0;
}

