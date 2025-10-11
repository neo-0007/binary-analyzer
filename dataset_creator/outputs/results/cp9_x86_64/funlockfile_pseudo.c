
void funlockfile(FILE *__stream)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)__stream->_lock;
  iVar1 = piVar2[1];
  piVar2[1] = iVar1 + -1;
  if (iVar1 + -1 == 0) {
    piVar2[2] = 0;
    piVar2[3] = 0;
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = 0;
    UNLOCK();
    if (1 < iVar1) {
      __lll_lock_wake_private();
      return;
    }
  }
  return;
}

