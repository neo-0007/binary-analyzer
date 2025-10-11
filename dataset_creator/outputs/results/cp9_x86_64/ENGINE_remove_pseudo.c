
int ENGINE_remove(ENGINE *e)

{
  long lVar1;
  ENGINE *pEVar2;
  int iVar3;
  ENGINE *pEVar4;
  
  if (e == (ENGINE *)0x0) {
    ERR_new();
    ERR_set_debug("../crypto/engine/eng_list.c",0x147,"ENGINE_remove");
    ERR_set_error(0x26,0xc0102,0);
    return 0;
  }
  iVar3 = CRYPTO_THREAD_write_lock(global_engine_lock);
  pEVar2 = engine_list_head;
  if (iVar3 == 0) {
    return 0;
  }
  pEVar4 = engine_list_head;
  if ((e != engine_list_head) && (engine_list_head != (ENGINE *)0x0)) {
    do {
      pEVar4 = *(ENGINE **)(pEVar4 + 0xc0);
      if (pEVar4 == (ENGINE *)0x0) goto LAB_0050d1e0;
    } while (e != pEVar4);
  }
  if (pEVar4 == (ENGINE *)0x0) {
LAB_0050d1e0:
    ERR_new();
    iVar3 = 0;
    ERR_set_debug("../crypto/engine/eng_list.c",0x78,"engine_list_remove");
    ERR_set_error(0x26,0x69,0);
    ERR_new();
    ERR_set_debug("../crypto/engine/eng_list.c",0x14d,"ENGINE_remove");
    ERR_set_error(0x26,0x6e,0);
  }
  else {
    lVar1 = *(long *)(e + 0xc0);
    if (lVar1 != 0) {
      *(undefined8 *)(lVar1 + 0xb8) = *(undefined8 *)(e + 0xb8);
    }
    pEVar4 = *(ENGINE **)(e + 0xb8);
    if (pEVar4 != (ENGINE *)0x0) {
      *(long *)(pEVar4 + 0xc0) = lVar1;
    }
    if (e == pEVar2) {
      engine_list_head = *(ENGINE **)(e + 0xc0);
    }
    if (e == engine_list_tail) {
      engine_list_tail = pEVar4;
    }
    iVar3 = 1;
    engine_free_util(e,0);
  }
  CRYPTO_THREAD_unlock(global_engine_lock);
  return iVar3;
}

