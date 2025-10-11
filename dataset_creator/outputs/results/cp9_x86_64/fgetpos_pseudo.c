
int fgetpos(FILE *__stream,fpos64_t *__pos)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  long in_FS_OFFSET;
  
  if ((__stream->_flags & 0x8000U) == 0) {
    lVar2 = *(long *)(in_FS_OFFSET + 0x10);
    piVar4 = (int *)__stream->_lock;
    if (*(long *)(piVar4 + 2) != lVar2) {
      LOCK();
      iVar5 = *piVar4;
      if (iVar5 == 0) {
        *piVar4 = 1;
      }
      UNLOCK();
      if (iVar5 != 0) {
        __lll_lock_wait_private();
      }
      piVar4 = (int *)__stream->_lock;
      *(long *)(piVar4 + 2) = lVar2;
    }
    piVar4[1] = piVar4[1] + 1;
  }
                    /* try { // try from 007980a7 to 0079818c has its CatchHandler @ 0079819f */
  lVar2 = _IO_seekoff_unlocked(__stream,0,1,0);
  uVar3 = __stream->_flags;
  if ((uVar3 & 0x100) == 0) {
    if (lVar2 != -1) {
      __pos->__pos = lVar2;
      iVar5 = 0;
      if (__stream->_mode < 1) goto LAB_00798114;
LAB_007980d6:
      iVar1 = __libio_codecvt_encoding(__stream->__pad1);
      uVar3 = __stream->_flags;
      iVar5 = 0;
      if (iVar1 < 0) {
        __pos->__state = *(__mbstate_t *)((long)__stream->__pad2 + 0x58);
      }
      goto LAB_00798114;
    }
  }
  else if (lVar2 != -1) {
    if (0 < __stream->_mode) {
      __pos->__pos = lVar2;
      goto LAB_007980d6;
    }
    lVar2 = lVar2 - ((long)__stream->_IO_save_end - (long)__stream->_IO_save_base);
    if (lVar2 != -1) {
      __pos->__pos = lVar2;
      iVar5 = 0;
      goto LAB_00798114;
    }
  }
  iVar5 = -1;
  if (*(int *)(in_FS_OFFSET + -0x58) == 0) {
    *(undefined4 *)(in_FS_OFFSET + -0x58) = 5;
  }
LAB_00798114:
  if ((uVar3 & 0x8000) == 0) {
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
  return iVar5;
}

