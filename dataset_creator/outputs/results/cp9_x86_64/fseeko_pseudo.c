
int fseeko(FILE *__stream,__off64_t __off,int __whence)

{
  int iVar1;
  long lVar2;
  int *piVar3;
  long in_FS_OFFSET;
  
  if ((__stream->_flags & 0x8000U) == 0) {
    lVar2 = *(long *)(in_FS_OFFSET + 0x10);
    piVar3 = (int *)__stream->_lock;
    if (*(long *)(piVar3 + 2) != lVar2) {
      LOCK();
      iVar1 = *piVar3;
      if (iVar1 == 0) {
        *piVar3 = 1;
      }
      UNLOCK();
      if (iVar1 != 0) {
                    /* try { // try from 006f9140 to 006f9144 has its CatchHandler @ 006f914a */
        __lll_lock_wait_private();
      }
      piVar3 = (int *)__stream->_lock;
      *(long *)(piVar3 + 2) = lVar2;
    }
    piVar3[1] = piVar3[1] + 1;
  }
                    /* try { // try from 006f90de to 006f90e2 has its CatchHandler @ 006f914a */
  lVar2 = _IO_seekoff_unlocked(__stream,__off,__whence,3);
  if ((__stream->_flags & 0x8000U) == 0) {
    piVar3 = (int *)__stream->_lock;
    iVar1 = piVar3[1];
    piVar3[1] = iVar1 + -1;
    if (iVar1 + -1 == 0) {
      piVar3[2] = 0;
      piVar3[3] = 0;
      LOCK();
      iVar1 = *piVar3;
      *piVar3 = 0;
      UNLOCK();
      if (1 < iVar1) {
        __lll_lock_wake_private();
      }
    }
  }
  return -(uint)(lVar2 == -1);
}

