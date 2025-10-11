
undefined8 __lll_unlock_elision(int *param_1)

{
  int iVar1;
  
  if (*param_1 == 0) {
    xend();
  }
  else {
    LOCK();
    iVar1 = *param_1;
    *param_1 = 0;
    UNLOCK();
    if (1 < iVar1) {
      __lll_lock_wake();
      return 0;
    }
  }
  return 0;
}

