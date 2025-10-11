
int fsetpos(FILE *__stream,fpos_t *__pos)

{
  int iVar1;
  int iVar2;
  long lVar3;
  int *piVar4;
  long in_FS_OFFSET;
  
  if ((__stream->_flags & 0x8000U) == 0) {
    lVar3 = *(long *)(in_FS_OFFSET + 0x10);
    piVar4 = (int *)__stream->_lock;
    if (*(long *)(piVar4 + 2) != lVar3) {
      LOCK();
      iVar2 = *piVar4;
      if (iVar2 == 0) {
        *piVar4 = 1;
      }
      UNLOCK();
      if (iVar2 != 0) {
                    /* try { // try from 007982a0 to 007982a4 has its CatchHandler @ 007982aa */
        __lll_lock_wait_private();
      }
      piVar4 = (int *)__stream->_lock;
      *(long *)(piVar4 + 2) = lVar3;
    }
    piVar4[1] = piVar4[1] + 1;
  }
                    /* try { // try from 00798207 to 0079825b has its CatchHandler @ 007982aa */
  lVar3 = _IO_seekpos_unlocked(__stream,__pos->__pos,3);
  if (lVar3 == -1) {
    iVar2 = -1;
    if (*(int *)(in_FS_OFFSET + -0x58) == 0) {
      *(undefined4 *)(in_FS_OFFSET + -0x58) = 5;
    }
  }
  else {
    if ((0 < __stream->_mode) && (iVar2 = __libio_codecvt_encoding(__stream->__pad1), iVar2 < 0)) {
      *(__mbstate_t *)((long)__stream->__pad2 + 0x58) = __pos->__state;
    }
    iVar2 = 0;
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
  return iVar2;
}

