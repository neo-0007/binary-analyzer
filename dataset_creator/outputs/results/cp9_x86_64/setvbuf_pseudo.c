
int setvbuf(FILE *__stream,char *__buf,int __modes,size_t __n)

{
  int iVar1;
  int iVar2;
  long lVar3;
  uint uVar4;
  int *piVar5;
  long in_FS_OFFSET;
  
  uVar4 = __stream->_flags;
  if ((uVar4 & 0x8000) == 0) {
    lVar3 = *(long *)(in_FS_OFFSET + 0x10);
    piVar5 = (int *)__stream->_lock;
    if (*(long *)(piVar5 + 2) != lVar3) {
      LOCK();
      iVar2 = *piVar5;
      if (iVar2 == 0) {
        *piVar5 = 1;
      }
      UNLOCK();
      if (iVar2 != 0) {
        __lll_lock_wait_private();
      }
      piVar5 = (int *)__stream->_lock;
      uVar4 = __stream->_flags;
      *(long *)(piVar5 + 2) = lVar3;
    }
    piVar5[1] = piVar5[1] + 1;
    if (__modes == 1) {
LAB_006f4f00:
      uVar4 = uVar4 & 0xfffffffd | 0x200;
      __stream->_flags = uVar4;
      if (__buf == (char *)0x0) {
        iVar2 = 0;
        goto LAB_006f4eaf;
      }
    }
    else {
      if (__modes != 2) {
        if (__modes == 0) goto LAB_006f4e60;
LAB_006f4e22:
        iVar2 = -1;
        goto LAB_006f4eaf;
      }
LAB_006f4ee8:
      __n = 0;
      __buf = (char *)0x0;
      __stream->_flags = uVar4 & 0xfffffdff | 2;
    }
  }
  else {
    if (__modes == 1) goto LAB_006f4f00;
    if (__modes == 2) goto LAB_006f4ee8;
    if (__modes != 0) {
      return -1;
    }
LAB_006f4e60:
    uVar4 = uVar4 & 0xfffffdfd;
    __stream->_flags = uVar4;
    if (__buf == (char *)0x0) {
      iVar2 = 0;
      if (__stream->_IO_buf_base != (char *)0x0) goto LAB_006f4eaf;
      lVar3 = *(long *)(__stream + 1);
      if (0x827 < lVar3 - 0x932180U) {
        _IO_vtable_check();
      }
                    /* try { // try from 006f4f51 to 006f4f8e has its CatchHandler @ 006f4f91 */
      iVar2 = (**(code **)(lVar3 + 0x68))(__stream);
      uVar4 = __stream->_flags;
      if (-1 < iVar2) {
        uVar4 = uVar4 & 0xfffffdff;
        iVar2 = 0;
        __stream->_flags = uVar4;
        goto LAB_006f4eaf;
      }
      goto LAB_006f4e22;
    }
  }
  lVar3 = *(long *)(__stream + 1);
  if (0x827 < lVar3 - 0x932180U) {
    _IO_vtable_check();
  }
                    /* try { // try from 006f4ea2 to 006f4ea5 has its CatchHandler @ 006f4f91 */
  lVar3 = (**(code **)(lVar3 + 0x58))(__stream,__buf,__n);
  uVar4 = __stream->_flags;
  iVar2 = -(uint)(lVar3 == 0);
LAB_006f4eaf:
  if ((uVar4 & 0x8000) == 0) {
    piVar5 = (int *)__stream->_lock;
    iVar1 = piVar5[1];
    piVar5[1] = iVar1 + -1;
    if (iVar1 + -1 == 0) {
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
  }
  return iVar2;
}

