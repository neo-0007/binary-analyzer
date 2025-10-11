
void __free_in6ai(long param_1)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  
  if (param_1 == 0) {
    return;
  }
  LOCK();
  piVar1 = (int *)(param_1 + -0x14);
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
    if (*(int *)(param_1 + -0x14) == 0) {
      free((void *)(param_1 + -0x18));
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
  return;
}

