
void rewind(FILE *__stream)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  int *piVar4;
  long in_FS_OFFSET;
  
  if ((__stream->_flags & 0x8000U) == 0) {
    lVar3 = *(long *)(in_FS_OFFSET + 0x10);
    piVar4 = (int *)__stream->_lock;
    if (*(long *)(piVar4 + 2) != lVar3) {
      LOCK();
      iVar1 = *piVar4;
      if (iVar1 == 0) {
        *piVar4 = 1;
      }
      UNLOCK();
      if (iVar1 != 0) {
                    /* try { // try from 007b66f0 to 007b66f4 has its CatchHandler @ 007b66f7 */
        __lll_lock_wait_private();
      }
      piVar4 = (int *)__stream->_lock;
      *(long *)(piVar4 + 2) = lVar3;
    }
    piVar4[1] = piVar4[1] + 1;
  }
                    /* try { // try from 007b66a2 to 007b66a6 has its CatchHandler @ 007b66f7 */
  _IO_seekoff_unlocked(__stream,0,0,3);
  uVar2 = __stream->_flags;
  __stream->_flags = uVar2 & 0xffffffcf;
  if ((uVar2 & 0x8000) == 0) {
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
        return;
      }
    }
  }
  return;
}

