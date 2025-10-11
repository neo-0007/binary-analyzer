
__off64_t ftello(FILE *__stream)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
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
                    /* try { // try from 006f9290 to 006f9294 has its CatchHandler @ 006f92a1 */
        __lll_lock_wait_private();
      }
      piVar4 = (int *)__stream->_lock;
      *(long *)(piVar4 + 2) = lVar2;
    }
    piVar4[1] = piVar4[1] + 1;
  }
                    /* try { // try from 006f91b6 to 006f91ba has its CatchHandler @ 006f92a1 */
  lVar2 = _IO_seekoff_unlocked(__stream,0,1,0);
  uVar3 = __stream->_flags & 0x8000;
  if ((__stream->_flags & 0x100U) == 0) {
LAB_006f921b:
    if (uVar3 == 0) {
      piVar5 = (int *)__stream->_lock;
      piVar4 = piVar5 + 1;
      *piVar4 = *piVar4 + -1;
      if (*piVar4 == 0) goto LAB_006f91eb;
    }
  }
  else {
    if (lVar2 == -1) {
      if (uVar3 == 0) {
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
      goto LAB_006f9255;
    }
    if (__stream->_mode < 1) {
      lVar2 = lVar2 - ((long)__stream->_IO_save_end - (long)__stream->_IO_save_base);
      goto LAB_006f921b;
    }
    if (uVar3 != 0) {
      return lVar2;
    }
    piVar5 = (int *)__stream->_lock;
    piVar4 = piVar5 + 1;
    *piVar4 = *piVar4 + -1;
    if (*piVar4 != 0) {
      return lVar2;
    }
LAB_006f91eb:
    piVar5[2] = 0;
    piVar5[3] = 0;
    LOCK();
    iVar1 = *piVar5;
    *piVar5 = 0;
    UNLOCK();
    if (1 < iVar1) {
      __lll_lock_wake_private();
    }
  }
  if (lVar2 != -1) {
    return lVar2;
  }
LAB_006f9255:
  if (*(int *)(in_FS_OFFSET + -0x58) == 0) {
    *(undefined4 *)(in_FS_OFFSET + -0x58) = 5;
  }
  return -1;
}

