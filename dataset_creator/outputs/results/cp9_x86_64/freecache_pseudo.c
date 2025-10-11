
void freecache(void)

{
  int *piVar1;
  int iVar2;
  void *__ptr;
  bool bVar3;
  
  __ptr = cache;
  if (cache != (void *)0x0) {
    LOCK();
    piVar1 = (int *)((long)cache + 4);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      LOCK();
      bVar3 = lock == 0;
      if (bVar3) {
        lock = 1;
      }
      UNLOCK();
      if (!bVar3) {
        __lll_lock_wait_private(&lock);
      }
      if (*(int *)((long)__ptr + 4) == 0) {
        free(__ptr);
      }
      iVar2 = lock;
      LOCK();
      lock = 0;
      UNLOCK();
      if (1 < iVar2) {
        __lll_lock_wake_private(&lock);
        return;
      }
    }
  }
  return;
}

