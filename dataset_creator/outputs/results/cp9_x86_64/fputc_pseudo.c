
int fputc(int __c,FILE *__stream)

{
  char *pcVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  long in_FS_OFFSET;
  
  if ((__stream->_flags2 & 0x80) != 0) {
    if ((__stream->_flags & 0x8000U) == 0) {
      lVar2 = *(long *)(in_FS_OFFSET + 0x10);
      piVar5 = (int *)__stream->_lock;
      if (*(long *)(piVar5 + 2) != lVar2) {
        LOCK();
        iVar4 = *piVar5;
        if (iVar4 == 0) {
          *piVar5 = 1;
        }
        UNLOCK();
        if (iVar4 != 0) {
                    /* try { // try from 006f89d0 to 006f89d4 has its CatchHandler @ 006f89da */
          __lll_lock_wait_private();
        }
        piVar5 = (int *)__stream->_lock;
        *(long *)(piVar5 + 2) = lVar2;
      }
      piVar5[1] = piVar5[1] + 1;
    }
    pcVar1 = __stream->_IO_write_ptr;
    uVar3 = __c & 0xff;
    if (pcVar1 < __stream->_IO_write_end) {
      __stream->_IO_write_ptr = pcVar1 + 1;
      *pcVar1 = (char)__c;
    }
    else {
                    /* try { // try from 006f8995 to 006f8999 has its CatchHandler @ 006f89da */
      uVar3 = __overflow(__stream,uVar3);
    }
    if ((__stream->_flags & 0x8000U) == 0) {
      piVar5 = (int *)__stream->_lock;
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
  pcVar1 = __stream->_IO_write_ptr;
  if (__stream->_IO_write_end <= pcVar1) {
    iVar4 = __overflow(__stream,__c & 0xffU);
    return iVar4;
  }
  __stream->_IO_write_ptr = pcVar1 + 1;
  *pcVar1 = (char)__c;
  return __c & 0xffU;
}

