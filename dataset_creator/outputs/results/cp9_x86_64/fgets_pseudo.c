
char * fgets(char *__s,int __n,FILE *__stream)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  int *piVar5;
  long in_FS_OFFSET;
  
  if (0 < __n) {
    if (__n == 1) {
      *__s = '\0';
    }
    else {
      uVar4 = __stream->_flags;
      if ((uVar4 & 0x8000) == 0) {
        lVar3 = *(long *)(in_FS_OFFSET + 0x10);
        piVar5 = (int *)__stream->_lock;
        if (*(long *)(piVar5 + 2) != lVar3) {
          LOCK();
          iVar1 = *piVar5;
          if (iVar1 == 0) {
            *piVar5 = 1;
          }
          UNLOCK();
          if (iVar1 != 0) {
                    /* try { // try from 006f3ea0 to 006f3ea4 has its CatchHandler @ 006f3eaa */
            __lll_lock_wait_private();
          }
          piVar5 = (int *)__stream->_lock;
          uVar4 = __stream->_flags;
          *(long *)(piVar5 + 2) = lVar3;
        }
        piVar5[1] = piVar5[1] + 1;
      }
      __stream->_flags = uVar4 & 0xffffffdf;
                    /* try { // try from 006f3deb to 006f3def has its CatchHandler @ 006f3eaa */
      lVar3 = _IO_getline(__stream,__s,(long)(__n + -1),10,1);
      uVar2 = __stream->_flags;
      if ((lVar3 == 0) || (((uVar2 & 0x20) != 0 && (*(int *)(in_FS_OFFSET + -0x58) != 0xb)))) {
        __stream->_flags = uVar4 & 0x20 | uVar2;
        __s = (char *)0x0;
      }
      else {
        __s[lVar3] = '\0';
        uVar2 = __stream->_flags;
        __stream->_flags = uVar4 & 0x20 | uVar2;
      }
      if ((uVar2 & 0x8000) == 0) {
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
    }
    return __s;
  }
  return (char *)0x0;
}

