
ENGINE * ENGINE_get_prev(ENGINE *e)

{
  int iVar1;
  ENGINE *pEVar2;
  
  if (e == (ENGINE *)0x0) {
    ERR_new();
    pEVar2 = (ENGINE *)0x0;
    ERR_set_debug("../crypto/engine/eng_list.c",0x11b,"ENGINE_get_prev");
    ERR_set_error(0x26,0xc0102,0);
  }
  else {
    iVar1 = CRYPTO_THREAD_write_lock(global_engine_lock);
    if (iVar1 == 0) {
      return (ENGINE *)0x0;
    }
    pEVar2 = *(ENGINE **)(e + 0xb8);
    if (pEVar2 != (ENGINE *)0x0) {
      LOCK();
      *(int *)(pEVar2 + 0x9c) = *(int *)(pEVar2 + 0x9c) + 1;
      UNLOCK();
    }
    CRYPTO_THREAD_unlock(global_engine_lock);
    ENGINE_free(e);
  }
  return pEVar2;
}

