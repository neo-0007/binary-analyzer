
void __resolv_conf_put(long *param_1)

{
  int iVar1;
  long lVar2;
  bool bVar3;
  
  if (param_1 == (long *)0x0) {
    return;
  }
  LOCK();
  bVar3 = lock == 0;
  if (bVar3) {
    lock = 1;
  }
  UNLOCK();
  if (!bVar3) {
    __lll_lock_wait_private(&lock);
  }
  if (*param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    conf_decrement_part_0();
  }
  lVar2 = *param_1 + -1;
  if (lVar2 == 0) {
    free(param_1);
  }
  else {
    *param_1 = lVar2;
  }
  iVar1 = lock;
  LOCK();
  lock = 0;
  UNLOCK();
  if (1 < iVar1) {
    __lll_lock_wake_private(&lock);
    return;
  }
  return;
}

