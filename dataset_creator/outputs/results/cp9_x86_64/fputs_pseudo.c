
int fputs(char *__s,FILE *__stream)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  size_t sVar4;
  size_t sVar5;
  int *piVar6;
  int iVar7;
  long in_FS_OFFSET;
  
  sVar4 = strlen(__s);
  if ((__stream->_flags & 0x8000U) == 0) {
    lVar3 = *(long *)(in_FS_OFFSET + 0x10);
    piVar6 = (int *)__stream->_lock;
    if (*(long *)(piVar6 + 2) != lVar3) {
      LOCK();
      iVar7 = *piVar6;
      if (iVar7 == 0) {
        *piVar6 = 1;
      }
      UNLOCK();
      if (iVar7 != 0) {
        __lll_lock_wait_private();
      }
      piVar6 = (int *)__stream->_lock;
      *(long *)(piVar6 + 2) = lVar3;
    }
    piVar6[1] = piVar6[1] + 1;
  }
  if (__stream->_mode == 0) {
    __stream->_mode = -1;
LAB_006f417d:
    lVar3 = *(long *)(__stream + 1);
    if (0x827 < lVar3 - 0x932180U) {
                    /* try { // try from 006f4210 to 006f4224 has its CatchHandler @ 006f422a */
      _IO_vtable_check();
    }
                    /* try { // try from 006f41aa to 006f41ad has its CatchHandler @ 006f422a */
    sVar5 = (**(code **)(lVar3 + 0x38))(__stream,__s,sVar4);
    iVar7 = 1;
    if (sVar4 == sVar5) {
      uVar1 = __stream->_flags;
      goto joined_r0x006f41e1;
    }
  }
  else if (__stream->_mode == -1) goto LAB_006f417d;
  iVar7 = -1;
  uVar1 = __stream->_flags;
joined_r0x006f41e1:
  if ((uVar1 & 0x8000) == 0) {
    piVar6 = (int *)__stream->_lock;
    iVar2 = piVar6[1];
    piVar6[1] = iVar2 + -1;
    if (iVar2 + -1 == 0) {
      piVar6[2] = 0;
      piVar6[3] = 0;
      LOCK();
      iVar2 = *piVar6;
      *piVar6 = 0;
      UNLOCK();
      if (1 < iVar2) {
        __lll_lock_wake_private();
      }
    }
  }
  return iVar7;
}

