
ENGINE * ENGINE_by_id(char *id)

{
  int iVar1;
  ENGINE *pEVar2;
  char *arg;
  ENGINE *pEVar3;
  
  if (id == (char *)0x0) {
    ERR_new();
    ERR_set_debug("../crypto/engine/eng_list.c",0x177,"ENGINE_by_id");
    ERR_set_error(0x26,0xc0102,0);
    return (ENGINE *)0x0;
  }
  ENGINE_load_builtin_engines();
  iVar1 = CRYPTO_THREAD_run_once(&engine_lock_init,do_engine_lock_init_ossl_);
  if ((iVar1 == 0) || (do_engine_lock_init_ossl_ret_ == 0)) {
    ERR_new();
    ERR_set_debug("../crypto/engine/eng_list.c",0x17d,"ENGINE_by_id");
    ERR_set_error(0x26,0xc0100,0);
    return (ENGINE *)0x0;
  }
  iVar1 = CRYPTO_THREAD_write_lock(global_engine_lock);
  pEVar3 = engine_list_head;
  if (iVar1 == 0) {
    return (ENGINE *)0x0;
  }
  for (; pEVar3 != (ENGINE *)0x0; pEVar3 = *(ENGINE **)(pEVar3 + 0xc0)) {
    iVar1 = strcmp(id,*(char **)pEVar3);
    if (iVar1 == 0) {
      if (((byte)pEVar3[0x98] & 4) == 0) {
        LOCK();
        *(int *)(pEVar3 + 0x9c) = *(int *)(pEVar3 + 0x9c) + 1;
        UNLOCK();
      }
      else {
        pEVar2 = ENGINE_new();
        if (pEVar2 == (ENGINE *)0x0) break;
        *(undefined8 *)pEVar2 = *(undefined8 *)pEVar3;
        *(undefined8 *)(pEVar2 + 8) = *(undefined8 *)(pEVar3 + 8);
        *(undefined8 *)(pEVar2 + 0x10) = *(undefined8 *)(pEVar3 + 0x10);
        *(undefined8 *)(pEVar2 + 0x18) = *(undefined8 *)(pEVar3 + 0x18);
        *(undefined8 *)(pEVar2 + 0x20) = *(undefined8 *)(pEVar3 + 0x20);
        *(undefined8 *)(pEVar2 + 0x28) = *(undefined8 *)(pEVar3 + 0x28);
        *(undefined8 *)(pEVar2 + 0x30) = *(undefined8 *)(pEVar3 + 0x30);
        *(undefined8 *)(pEVar2 + 0x38) = *(undefined8 *)(pEVar3 + 0x38);
        *(undefined8 *)(pEVar2 + 0x40) = *(undefined8 *)(pEVar3 + 0x40);
        *(undefined8 *)(pEVar2 + 0x48) = *(undefined8 *)(pEVar3 + 0x48);
        *(undefined8 *)(pEVar2 + 0x58) = *(undefined8 *)(pEVar3 + 0x58);
        *(undefined8 *)(pEVar2 + 0x60) = *(undefined8 *)(pEVar3 + 0x60);
        *(undefined8 *)(pEVar2 + 0x68) = *(undefined8 *)(pEVar3 + 0x68);
        *(undefined8 *)(pEVar2 + 0x70) = *(undefined8 *)(pEVar3 + 0x70);
        *(undefined8 *)(pEVar2 + 0x78) = *(undefined8 *)(pEVar3 + 0x78);
        *(undefined8 *)(pEVar2 + 0x80) = *(undefined8 *)(pEVar3 + 0x80);
        *(undefined8 *)(pEVar2 + 0x90) = *(undefined8 *)(pEVar3 + 0x90);
        *(undefined4 *)(pEVar2 + 0x98) = *(undefined4 *)(pEVar3 + 0x98);
        *(undefined8 *)(pEVar2 + 0xd8) = *(undefined8 *)(pEVar3 + 0xd8);
        engine_add_dynamic_id(pEVar2,0,0);
        pEVar3 = pEVar2;
      }
      CRYPTO_THREAD_unlock(global_engine_lock);
      return pEVar3;
    }
  }
  CRYPTO_THREAD_unlock(global_engine_lock);
  iVar1 = strcmp(id,"dynamic");
  if (iVar1 != 0) {
    arg = (char *)ossl_safe_getenv("OPENSSL_ENGINES");
    if (arg == (char *)0x0) {
      arg = "/usr/lib/x86_64-linux-gnu/engines-3";
    }
    pEVar3 = ENGINE_by_id("dynamic");
    if (pEVar3 != (ENGINE *)0x0) {
      iVar1 = ENGINE_ctrl_cmd_string(pEVar3,"ID",id,0);
      if ((((iVar1 != 0) && (iVar1 = ENGINE_ctrl_cmd_string(pEVar3,"DIR_LOAD","2",0), iVar1 != 0))
          && (iVar1 = ENGINE_ctrl_cmd_string(pEVar3,"DIR_ADD",arg,0), iVar1 != 0)) &&
         ((iVar1 = ENGINE_ctrl_cmd_string(pEVar3,"LIST_ADD","1",0), iVar1 != 0 &&
          (iVar1 = ENGINE_ctrl_cmd_string(pEVar3,"LOAD",(char *)0x0,0), iVar1 != 0)))) {
        return pEVar3;
      }
      goto LAB_0050d5e3;
    }
  }
  pEVar3 = (ENGINE *)0x0;
LAB_0050d5e3:
  ENGINE_free(pEVar3);
  ERR_new();
  ERR_set_debug("../crypto/engine/eng_list.c",0x1ae,"ENGINE_by_id");
  ERR_set_error(0x26,0x74,"id=%s",id);
  return (ENGINE *)0x0;
}

