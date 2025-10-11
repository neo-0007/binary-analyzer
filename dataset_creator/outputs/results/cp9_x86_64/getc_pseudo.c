
int getc(_IO_FILE *__fp)

{
  byte *pbVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  long in_FS_OFFSET;
  
  if ((__fp->_flags2 & 0x80) != 0) {
    if ((__fp->_flags & 0x8000U) == 0) {
      lVar2 = *(long *)(in_FS_OFFSET + 0x10);
      piVar5 = (int *)__fp->_lock;
      if (*(long *)(piVar5 + 2) != lVar2) {
        LOCK();
        iVar4 = *piVar5;
        if (iVar4 == 0) {
          *piVar5 = 1;
        }
        UNLOCK();
        if (iVar4 != 0) {
                    /* try { // try from 006f8bd8 to 006f8bdc has its CatchHandler @ 006f8bdf */
          __lll_lock_wait_private();
        }
        piVar5 = (int *)__fp->_lock;
        *(long *)(piVar5 + 2) = lVar2;
      }
      piVar5[1] = piVar5[1] + 1;
    }
    pbVar1 = (byte *)__fp->_IO_read_ptr;
    if (pbVar1 < __fp->_IO_read_end) {
      __fp->_IO_read_ptr = (char *)(pbVar1 + 1);
      uVar3 = (uint)*pbVar1;
    }
    else {
                    /* try { // try from 006f8ba3 to 006f8ba7 has its CatchHandler @ 006f8bdf */
      uVar3 = __uflow(__fp);
    }
    if ((__fp->_flags & 0x8000U) == 0) {
      piVar5 = (int *)__fp->_lock;
      iVar4 = piVar5[1];
      piVar5[1] = iVar4 + -1;
      if (iVar4 + -1 == 0) {
        piVar5[2] = 0;
        piVar5[3] = 0;
        LOCK();
        iVar4 = *piVar5;
        *piVar5 = 0;
        UNLOCK();
        if (1 < iVar4) {
          __lll_lock_wake_private();
        }
      }
    }
    return uVar3;
  }
  pbVar1 = (byte *)__fp->_IO_read_ptr;
  if (__fp->_IO_read_end <= pbVar1) {
    iVar4 = __uflow(__fp);
    return iVar4;
  }
  __fp->_IO_read_ptr = (char *)(pbVar1 + 1);
  return (int)*pbVar1;
}

