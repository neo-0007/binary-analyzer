
__ssize_t getdelim(char **__lineptr,size_t *__n,int __delimiter,FILE *__stream)

{
  _IO_lock_t *p_Var1;
  ulong uVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  char *__ptr;
  void *pvVar6;
  ulong __size;
  int *piVar7;
  long lVar8;
  size_t __n_00;
  long lVar9;
  long in_FS_OFFSET;
  
  if ((__lineptr == (char **)0x0) || (__n == (size_t *)0x0)) {
    *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x16;
    return -1;
  }
  uVar4 = __stream->_flags;
  if ((uVar4 & 0x8000) == 0) {
    lVar8 = *(long *)(in_FS_OFFSET + 0x10);
    piVar7 = (int *)__stream->_lock;
    if (*(long *)(piVar7 + 2) == lVar8) {
      piVar7[1] = piVar7[1] + 1;
      if ((uVar4 & 0x20) != 0) {
        lVar8 = -1;
        goto LAB_006f47ac;
      }
      goto LAB_006f466b;
    }
    LOCK();
    iVar3 = *piVar7;
    if (iVar3 == 0) {
      *piVar7 = 1;
    }
    UNLOCK();
    if (iVar3 != 0) {
      __lll_lock_wait_private();
    }
    p_Var1 = __stream->_lock;
    uVar4 = __stream->_flags;
    *(long *)((long)p_Var1 + 8) = lVar8;
    piVar7 = (int *)((long)p_Var1 + 4);
    *piVar7 = *piVar7 + 1;
    if ((uVar4 & 0x20) == 0) goto LAB_006f466b;
    lVar8 = -1;
  }
  else {
    if ((uVar4 & 0x20) != 0) {
      return -1;
    }
LAB_006f466b:
    if ((*__lineptr == (char *)0x0) || (*__n == 0)) {
      *__n = 0x78;
      pcVar5 = (char *)malloc(0x78);
      *__lineptr = pcVar5;
      if (pcVar5 != (char *)0x0) goto LAB_006f46a0;
LAB_006f488d:
      uVar4 = __stream->_flags;
      lVar8 = -1;
    }
    else {
LAB_006f46a0:
      pcVar5 = __stream->_IO_read_ptr;
      __n_00 = (long)__stream->_IO_read_end - (long)pcVar5;
      if ((long)__n_00 < 1) {
        iVar3 = __underflow(__stream);
        if (iVar3 == -1) goto LAB_006f488d;
        pcVar5 = __stream->_IO_read_ptr;
        __n_00 = (long)__stream->_IO_read_end - (long)pcVar5;
      }
      lVar9 = 0;
      while( true ) {
        pvVar6 = memchr(pcVar5,__delimiter,__n_00);
        if (pvVar6 != (void *)0x0) {
          __n_00 = (long)pvVar6 + (1 - (long)pcVar5);
        }
        if (0x7fffffffffffffff - lVar9 <= (long)__n_00) {
          lVar8 = -1;
          *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x4b;
          uVar4 = __stream->_flags;
          goto LAB_006f47a0;
        }
        lVar8 = lVar9 + __n_00;
        __ptr = *__lineptr;
        __size = lVar8 + 1;
        if (*__n < __size) {
          uVar2 = *__n * 2;
          if (__size <= uVar2) {
            __size = uVar2;
          }
          __ptr = (char *)realloc(__ptr,__size);
          if (__ptr == (char *)0x0) goto LAB_006f488d;
          *__lineptr = __ptr;
          pcVar5 = __stream->_IO_read_ptr;
          *__n = __size;
        }
        memcpy(__ptr + lVar9,pcVar5,__n_00);
        __stream->_IO_read_ptr = __stream->_IO_read_ptr + __n_00;
                    /* try { // try from 006f472d to 006f489f has its CatchHandler @ 006f48c9 */
        if ((pvVar6 != (void *)0x0) || (iVar3 = __underflow(__stream), iVar3 == -1)) break;
        pcVar5 = __stream->_IO_read_ptr;
        __n_00 = (long)__stream->_IO_read_end - (long)pcVar5;
        lVar9 = lVar8;
      }
      (*__lineptr)[lVar8] = '\0';
      uVar4 = __stream->_flags;
    }
  }
LAB_006f47a0:
  if ((uVar4 & 0x8000) != 0) {
    return lVar8;
  }
  piVar7 = (int *)__stream->_lock;
LAB_006f47ac:
  iVar3 = piVar7[1];
  piVar7[1] = iVar3 + -1;
  if (iVar3 + -1 == 0) {
    piVar7[2] = 0;
    piVar7[3] = 0;
    LOCK();
    iVar3 = *piVar7;
    *piVar7 = 0;
    UNLOCK();
    if (1 < iVar3) {
      __lll_lock_wake_private();
    }
  }
  return lVar8;
}

