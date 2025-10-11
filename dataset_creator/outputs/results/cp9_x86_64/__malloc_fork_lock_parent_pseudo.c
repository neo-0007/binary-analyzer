
ulong __malloc_fork_lock_parent(void)

{
  uint uVar1;
  ulong in_RAX;
  ulong uVar2;
  uint *puVar3;
  bool bVar4;
  
  if (__malloc_initialized == '\0') {
    return in_RAX;
  }
  LOCK();
  bVar4 = list_lock == 0;
  if (bVar4) {
    list_lock = 1;
  }
  UNLOCK();
  if (!bVar4) {
    __lll_lock_wait_private(&list_lock);
  }
  puVar3 = &main_arena;
  do {
    while( true ) {
      LOCK();
      uVar1 = *puVar3;
      if (uVar1 == 0) {
        *puVar3 = 1;
        uVar2 = 0;
      }
      else {
        uVar2 = (ulong)uVar1;
      }
      UNLOCK();
      if (uVar1 != 0) break;
      puVar3 = *(uint **)(puVar3 + 0x21c);
      if (puVar3 == &main_arena) {
        return uVar2;
      }
    }
    uVar2 = __lll_lock_wait_private(puVar3);
    puVar3 = *(uint **)(puVar3 + 0x21c);
  } while (puVar3 != &main_arena);
  return uVar2;
}

