
wint_t ungetwc(wint_t __wc,__FILE *__stream)

{
  int iVar1;
  long lVar2;
  wint_t wVar3;
  int *piVar4;
  long in_FS_OFFSET;
  
  if ((__stream->_flags & 0x8000U) == 0) {
    lVar2 = *(long *)(in_FS_OFFSET + 0x10);
    piVar4 = (int *)__stream->_lock;
    if (*(long *)(piVar4 + 2) != lVar2) {
      LOCK();
      iVar1 = *piVar4;
      if (iVar1 == 0) {
        *piVar4 = 1;
      }
      UNLOCK();
      if (iVar1 != 0) {
                    /* try { // try from 006f5220 to 006f5224 has its CatchHandler @ 006f5227 */
        __lll_lock_wait_private();
      }
      piVar4 = (int *)__stream->_lock;
      *(long *)(piVar4 + 2) = lVar2;
    }
    piVar4[1] = piVar4[1] + 1;
  }
  _IO_fwide(__stream,1);
  wVar3 = 0xffffffff;
  if (__wc != 0xffffffff) {
    wVar3 = _IO_sputbackwc(__stream,__wc);
  }
  if ((__stream->_flags & 0x8000U) == 0) {
    piVar4 = (int *)__stream->_lock;
    iVar1 = piVar4[1];
    piVar4[1] = iVar1 + -1;
    if (iVar1 + -1 == 0) {
      piVar4[2] = 0;
      piVar4[3] = 0;
      LOCK();
      iVar1 = *piVar4;
      *piVar4 = 0;
      UNLOCK();
      if (1 < iVar1) {
        __lll_lock_wake_private();
      }
    }
  }
  return wVar3;
}

