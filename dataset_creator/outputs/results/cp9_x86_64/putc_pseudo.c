
int putc(int __c,_IO_FILE *__fp)

{
  char *pcVar1;
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
                    /* try { // try from 006f8d10 to 006f8d14 has its CatchHandler @ 006f8d1a */
          __lll_lock_wait_private();
        }
        piVar5 = (int *)__fp->_lock;
        *(long *)(piVar5 + 2) = lVar2;
      }
      piVar5[1] = piVar5[1] + 1;
    }
    pcVar1 = __fp->_IO_write_ptr;
    uVar3 = __c & 0xff;
    if (pcVar1 < __fp->_IO_write_end) {
      __fp->_IO_write_ptr = pcVar1 + 1;
      *pcVar1 = (char)__c;
    }
    else {
                    /* try { // try from 006f8cd5 to 006f8cd9 has its CatchHandler @ 006f8d1a */
      uVar3 = __overflow(__fp,uVar3);
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
  pcVar1 = __fp->_IO_write_ptr;
  if (__fp->_IO_write_end <= pcVar1) {
    iVar4 = __overflow(__fp,__c & 0xffU);
    return iVar4;
  }
  __fp->_IO_write_ptr = pcVar1 + 1;
  *pcVar1 = (char)__c;
  return __c & 0xffU;
}

