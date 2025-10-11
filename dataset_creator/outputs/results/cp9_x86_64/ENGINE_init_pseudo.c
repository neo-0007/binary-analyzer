
int ENGINE_init(ENGINE *e)

{
  int iVar1;
  
  if (e == (ENGINE *)0x0) {
    ERR_new();
    ERR_set_debug("../crypto/engine/eng_init.c",0x55,"ENGINE_init");
    ERR_set_error(0x26,0xc0102,0);
    return 0;
  }
  iVar1 = CRYPTO_THREAD_run_once(&engine_lock_init,do_engine_lock_init_ossl_);
  if ((iVar1 == 0) || (do_engine_lock_init_ossl_ret_ == 0)) {
    ERR_new();
    iVar1 = 0;
    ERR_set_debug("../crypto/engine/eng_init.c",0x59,"ENGINE_init");
    ERR_set_error(0x26,0xc0100,0);
  }
  else {
    iVar1 = CRYPTO_THREAD_write_lock(global_engine_lock);
    if (iVar1 != 0) {
      iVar1 = engine_unlocked_init(e);
      CRYPTO_THREAD_unlock(global_engine_lock);
      return iVar1;
    }
  }
  return iVar1;
}

