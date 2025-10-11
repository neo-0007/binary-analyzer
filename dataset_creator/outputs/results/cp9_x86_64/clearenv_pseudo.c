
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int clearenv(void)

{
  int iVar1;
  bool bVar2;
  
  LOCK();
  bVar2 = envlock == 0;
  if (bVar2) {
    envlock = 1;
  }
  UNLOCK();
  if (!bVar2) {
    __lll_lock_wait_private(&envlock);
  }
  if ((last_environ == environ) && (environ != (void *)0x0)) {
    free(environ);
    last_environ = (void *)0x0;
  }
  iVar1 = envlock;
  environ = (void *)0x0;
  LOCK();
  envlock = 0;
  UNLOCK();
  if (1 < iVar1) {
    __lll_lock_wake_private(&envlock);
    return 0;
  }
  return 0;
}

