
void __malloc_fork_unlock_parent(void)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = &main_arena;
  if (__malloc_initialized != '\0') {
    do {
      while( true ) {
        LOCK();
        iVar1 = *piVar2;
        *piVar2 = 0;
        UNLOCK();
        if (iVar1 < 2) break;
        __lll_lock_wake_private(piVar2);
        piVar2 = *(int **)(piVar2 + 0x21c);
        if (piVar2 == &main_arena) goto LAB_007066c0;
      }
      piVar2 = *(int **)(piVar2 + 0x21c);
    } while (piVar2 != &main_arena);
LAB_007066c0:
    iVar1 = list_lock;
    LOCK();
    list_lock = 0;
    UNLOCK();
    if (1 < iVar1) {
      __lll_lock_wake_private(&list_lock);
      return;
    }
  }
  return;
}

