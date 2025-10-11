
void rewinddir(DIR *__dirp)

{
  DIR *pDVar1;
  int iVar2;
  
  pDVar1 = __dirp + 4;
  LOCK();
  iVar2 = *(int *)pDVar1;
  if (iVar2 == 0) {
    *(int *)pDVar1 = 1;
  }
  UNLOCK();
  if (iVar2 != 0) {
    __lll_lock_wait_private(pDVar1);
  }
  lseek64(*(int *)__dirp,0,0);
  *(undefined4 *)(__dirp + 0x28) = 0;
  *(undefined8 *)(__dirp + 0x20) = 0;
  *(undefined1 (*) [16])(__dirp + 0x10) = (undefined1  [16])0x0;
  LOCK();
  iVar2 = *(int *)(__dirp + 4);
  *(int *)(__dirp + 4) = 0;
  UNLOCK();
  if (1 < iVar2) {
    __lll_lock_wake_private(pDVar1);
    return;
  }
  return;
}

