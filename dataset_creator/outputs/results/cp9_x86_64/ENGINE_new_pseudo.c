
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

ENGINE * ENGINE_new(void)

{
  int iVar1;
  ENGINE *obj;
  ENGINE *pEVar2;
  
  iVar1 = CRYPTO_THREAD_run_once(&engine_lock_init,do_engine_lock_init_ossl_);
  if (((iVar1 != 0) && (do_engine_lock_init_ossl_ret_ != 0)) &&
     (obj = (ENGINE *)CRYPTO_zalloc(0xe0,"../crypto/engine/eng_lib.c",0x20), obj != (ENGINE *)0x0))
  {
    LOCK();
    *(undefined4 *)(obj + 0x9c) = 1;
    UNLOCK();
    iVar1 = CRYPTO_new_ex_data(10,obj,(CRYPTO_EX_DATA *)(obj + 0xa8));
    pEVar2 = obj;
    if (iVar1 == 0) {
      pEVar2 = (ENGINE *)0x0;
      CRYPTO_free(obj);
    }
    return pEVar2;
  }
  ERR_new();
  ERR_set_debug("../crypto/engine/eng_lib.c",0x21,"ENGINE_new");
  ERR_set_error(0x26,0xc0100,0);
  return (ENGINE *)0x0;
}

