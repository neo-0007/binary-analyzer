
int fflush(FILE *__stream)

{
  int iVar1;
  long lVar2;
  int iVar3;
  int *piVar4;
  long in_FS_OFFSET;
  
  if (__stream == (FILE *)0x0) {
    iVar3 = _IO_flush_all();
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
                    /* try { // try from 006f3d40 to 006f3d44 has its CatchHandler @ 006f3d4a */
        __lll_lock_wait_private();
      }
      piVar4 = (int *)__stream->_lock;
      *(long *)(piVar4 + 2) = lVar2;
    }
    piVar4[1] = piVar4[1] + 1;
  }
  lVar2 = *(long *)(__stream + 1);
  if (0x827 < lVar2 - 0x932180U) {
                    /* try { // try from 006f3d20 to 006f3d24 has its CatchHandler @ 006f3d4a */
    _IO_vtable_check();
  }
                    /* try { // try from 006f3cd8 to 006f3cda has its CatchHandler @ 006f3d4a */
  iVar3 = (**(code **)(lVar2 + 0x60))(__stream);
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
  return -(uint)(iVar3 != 0);
}

