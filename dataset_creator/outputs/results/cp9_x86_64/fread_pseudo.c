
size_t fread(void *__ptr,size_t __size,size_t __n,FILE *__stream)

{
  int iVar1;
  long lVar2;
  size_t sVar3;
  int *piVar4;
  size_t sVar5;
  size_t sVar6;
  long in_FS_OFFSET;
  
  sVar5 = __size * __n;
  sVar6 = sVar5;
  if (sVar5 != 0) {
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
                    /* try { // try from 006f4328 to 006f432c has its CatchHandler @ 006f4332 */
          __lll_lock_wait_private();
        }
        piVar4 = (int *)__stream->_lock;
        *(long *)(piVar4 + 2) = lVar2;
      }
      piVar4[1] = piVar4[1] + 1;
    }
                    /* try { // try from 006f42b4 to 006f42b8 has its CatchHandler @ 006f4332 */
    sVar3 = _IO_sgetn(__stream,__ptr,sVar5);
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
    sVar6 = __n;
    if (sVar5 - sVar3 != 0) {
      sVar6 = sVar3 / __size;
    }
  }
  return sVar6;
}

