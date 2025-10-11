
int ENGINE_add(ENGINE *e)

{
  char *__s2;
  int iVar1;
  ENGINE *pEVar2;
  undefined8 uVar3;
  
  if (e == (ENGINE *)0x0) {
    ERR_new();
    ERR_set_debug("../crypto/engine/eng_list.c",0x131,"ENGINE_add");
    ERR_set_error(0x26,0xc0102,0);
    return 0;
  }
  if ((*(long *)e == 0) || (*(long *)(e + 8) == 0)) {
    ERR_new();
    ERR_set_debug("../crypto/engine/eng_list.c",0x135,"ENGINE_add");
    ERR_set_error(0x26,0x6c,0);
    return 0;
  }
  iVar1 = CRYPTO_THREAD_write_lock(global_engine_lock);
  if (iVar1 == 0) {
    return 0;
  }
  if (engine_list_head == (ENGINE *)0x0) {
    if (engine_list_tail == (ENGINE *)0x0) {
      engine_list_head = e;
      *(undefined8 *)(e + 0xb8) = 0;
      engine_cleanup_add_last(engine_list_cleanup);
LAB_0050d076:
      LOCK();
      *(int *)(e + 0x9c) = *(int *)(e + 0x9c) + 1;
      UNLOCK();
      iVar1 = 1;
      engine_list_tail = e;
      *(undefined8 *)(e + 0xc0) = 0;
      goto LAB_0050cfa3;
    }
    ERR_new();
    uVar3 = 0x4e;
LAB_0050cf52:
    ERR_set_debug("../crypto/engine/eng_list.c",uVar3,"engine_list_add");
    ERR_set_error(0x26,0x6e,0);
  }
  else {
    __s2 = *(char **)e;
    pEVar2 = engine_list_head;
    do {
      iVar1 = strcmp(*(char **)pEVar2,__s2);
      pEVar2 = *(ENGINE **)(pEVar2 + 0xc0);
      if (iVar1 == 0) goto LAB_0050d0a0;
    } while (pEVar2 != (ENGINE *)0x0);
    if (iVar1 != 0) {
      if ((engine_list_tail != (ENGINE *)0x0) && (*(long *)(engine_list_tail + 0xc0) == 0)) {
        *(ENGINE **)(engine_list_tail + 0xc0) = e;
        *(ENGINE **)(e + 0xb8) = engine_list_tail;
        goto LAB_0050d076;
      }
      ERR_new();
      uVar3 = 0x5a;
      goto LAB_0050cf52;
    }
LAB_0050d0a0:
    ERR_new();
    ERR_set_debug("../crypto/engine/eng_list.c",0x48,"engine_list_add");
    ERR_set_error(0x26,0x67,0);
  }
  ERR_new();
  iVar1 = 0;
  ERR_set_debug("../crypto/engine/eng_list.c",0x13b,"ENGINE_add");
  ERR_set_error(0x26,0x6e,0);
LAB_0050cfa3:
  CRYPTO_THREAD_unlock(global_engine_lock);
  return iVar1;
}

