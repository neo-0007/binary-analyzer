
wint_t getwc(__FILE *__stream)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  wint_t *pwVar4;
  wint_t wVar5;
  int *piVar6;
  long in_FS_OFFSET;
  
  if ((__stream->_flags & 0x8000U) == 0) {
    lVar2 = *(long *)(in_FS_OFFSET + 0x10);
    piVar6 = (int *)__stream->_lock;
    if (*(long *)(piVar6 + 2) != lVar2) {
      LOCK();
      iVar1 = *piVar6;
      if (iVar1 == 0) {
        *piVar6 = 1;
      }
      UNLOCK();
      if (iVar1 != 0) {
                    /* try { // try from 006f5150 to 006f5154 has its CatchHandler @ 006f515a */
        __lll_lock_wait_private();
      }
      piVar6 = (int *)__stream->_lock;
      *(long *)(piVar6 + 2) = lVar2;
    }
    piVar6[1] = piVar6[1] + 1;
  }
  plVar3 = (long *)__stream->__pad2;
  if ((plVar3 == (long *)0x0) || (pwVar4 = (wint_t *)*plVar3, (wint_t *)plVar3[1] <= pwVar4)) {
                    /* try { // try from 006f5133 to 006f5137 has its CatchHandler @ 006f515a */
    wVar5 = __wuflow(__stream);
  }
  else {
    *plVar3 = (long)(pwVar4 + 1);
    wVar5 = *pwVar4;
  }
  if ((__stream->_flags & 0x8000U) == 0) {
    piVar6 = (int *)__stream->_lock;
    iVar1 = piVar6[1];
    piVar6[1] = iVar1 + -1;
    if (iVar1 + -1 == 0) {
      piVar6[2] = 0;
      piVar6[3] = 0;
      LOCK();
      iVar1 = *piVar6;
      *piVar6 = 0;
      UNLOCK();
      if (1 < iVar1) {
        __lll_lock_wake_private();
      }
    }
  }
  return wVar5;
}

