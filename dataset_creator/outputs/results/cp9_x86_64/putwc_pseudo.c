
wint_t putwc(wchar_t __wc,__FILE *__stream)

{
  int iVar1;
  long lVar2;
  void *pvVar3;
  wchar_t *pwVar4;
  int *piVar5;
  long in_FS_OFFSET;
  
  if ((__stream->_flags & 0x8000U) == 0) {
    lVar2 = *(long *)(in_FS_OFFSET + 0x10);
    piVar5 = (int *)__stream->_lock;
    if (*(long *)(piVar5 + 2) != lVar2) {
      LOCK();
      iVar1 = *piVar5;
      if (iVar1 == 0) {
        *piVar5 = 1;
      }
      UNLOCK();
      if (iVar1 != 0) {
                    /* try { // try from 006f5310 to 006f5314 has its CatchHandler @ 006f531a */
        __lll_lock_wait_private();
      }
      piVar5 = (int *)__stream->_lock;
      *(long *)(piVar5 + 2) = lVar2;
    }
    piVar5[1] = piVar5[1] + 1;
  }
  pvVar3 = __stream->__pad2;
  if ((pvVar3 == (void *)0x0) ||
     (pwVar4 = *(wchar_t **)((long)pvVar3 + 0x20), *(wchar_t **)((long)pvVar3 + 0x28) <= pwVar4)) {
                    /* try { // try from 006f52ed to 006f52f1 has its CatchHandler @ 006f531a */
    __wc = __woverflow(__stream,__wc);
  }
  else {
    *(wchar_t **)((long)pvVar3 + 0x20) = pwVar4 + 1;
    *pwVar4 = __wc;
  }
  if ((__stream->_flags & 0x8000U) == 0) {
    piVar5 = (int *)__stream->_lock;
    iVar1 = piVar5[1];
    piVar5[1] = iVar1 + -1;
    if (iVar1 + -1 == 0) {
      piVar5[2] = 0;
      piVar5[3] = 0;
      LOCK();
      iVar1 = *piVar5;
      *piVar5 = 0;
      UNLOCK();
      if (1 < iVar1) {
        __lll_lock_wake_private();
      }
    }
  }
  return __wc;
}

