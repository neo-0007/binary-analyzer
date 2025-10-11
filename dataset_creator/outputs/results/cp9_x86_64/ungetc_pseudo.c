
int ungetc(int __c,FILE *__stream)

{
  int iVar1;
  long lVar2;
  int iVar3;
  int *piVar4;
  long in_FS_OFFSET;
  
  if (__c == -1) {
    return -1;
  }
  if ((__stream->_flags2 & 0x80) == 0) {
    iVar3 = _IO_sputbackc(__stream,__c & 0xff);
    return iVar3;
  }
  if ((__stream->_flags & 0x8000U) == 0) {
    lVar2 = *(long *)(in_FS_OFFSET + 0x10);
    piVar4 = (int *)__stream->_lock;
    if (*(long *)(piVar4 + 2) != lVar2) {
      LOCK();
      iVar3 = *piVar4;
      if (iVar3 == 0) {
        *piVar4 = 1;
      }
      UNLOCK();
      if (iVar3 != 0) {
                    /* try { // try from 006f5070 to 006f5074 has its CatchHandler @ 006f5080 */
        __lll_lock_wait_private();
      }
      piVar4 = (int *)__stream->_lock;
      *(long *)(piVar4 + 2) = lVar2;
    }
    piVar4[1] = piVar4[1] + 1;
  }
  iVar3 = _IO_sputbackc(__stream,__c & 0xff);
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
  return iVar3;
}

