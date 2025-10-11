
int ferror(_IO_FILE *__fp)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  int *piVar5;
  long in_FS_OFFSET;
  
  uVar4 = __fp->_flags;
  if (((__fp->_flags2 & 0x80) == 0) || ((uVar4 & 0x8000) != 0)) {
    return uVar4 >> 5 & 1;
  }
  piVar5 = (int *)__fp->_lock;
  lVar3 = *(long *)(in_FS_OFFSET + 0x10);
  if (lVar3 == *(long *)(piVar5 + 2)) {
    iVar1 = piVar5[1];
    uVar4 = uVar4 >> 5 & 1;
  }
  else {
    LOCK();
    iVar1 = *piVar5;
    if (iVar1 == 0) {
      *piVar5 = 1;
    }
    UNLOCK();
    if (iVar1 != 0) {
      __lll_lock_wait_private();
    }
    uVar2 = __fp->_flags;
    piVar5 = (int *)__fp->_lock;
    *(long *)(piVar5 + 2) = lVar3;
    iVar1 = piVar5[1];
    uVar4 = uVar2 >> 5 & 1;
    if ((uVar2 & 0x8000) != 0) {
      piVar5[1] = iVar1 + 1;
      return uVar4;
    }
  }
  if (iVar1 == 0) {
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
  return uVar4;
}

