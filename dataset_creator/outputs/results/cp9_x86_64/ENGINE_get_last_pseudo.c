
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ENGINE * ENGINE_get_last(void)

{
  ENGINE *pEVar1;
  int iVar2;
  
  iVar2 = CRYPTO_THREAD_run_once(&engine_lock_init,do_engine_lock_init_ossl_);
  if ((iVar2 != 0) && (do_engine_lock_init_ossl_ret_ != 0)) {
    iVar2 = CRYPTO_THREAD_write_lock(global_engine_lock);
    pEVar1 = engine_list_tail;
    if (iVar2 != 0) {
      if (engine_list_tail != (ENGINE *)0x0) {
        LOCK();
        *(int *)(engine_list_tail + 0x9c) = *(int *)(engine_list_tail + 0x9c) + 1;
        UNLOCK();
      }
      CRYPTO_THREAD_unlock(global_engine_lock);
      return pEVar1;
    }
    return (ENGINE *)0x0;
  }
  ERR_new();
  ERR_set_debug("../crypto/engine/eng_list.c",0xf2,"ENGINE_get_last");
  ERR_set_error(0x26,0xc0100,0);
  return (ENGINE *)0x0;
}

