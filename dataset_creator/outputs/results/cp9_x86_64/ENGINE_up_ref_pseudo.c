
int ENGINE_up_ref(ENGINE *e)

{
  if (e != (ENGINE *)0x0) {
    LOCK();
    *(int *)(e + 0x9c) = *(int *)(e + 0x9c) + 1;
    UNLOCK();
    return 1;
  }
  ERR_new();
  ERR_set_debug("../crypto/engine/eng_list.c",0x1b7,"ENGINE_up_ref");
  ERR_set_error(0x26,0xc0102,0);
  return 0;
}

