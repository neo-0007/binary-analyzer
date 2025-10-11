
size_t fwrite(void *__ptr,size_t __size,size_t __n,FILE *__s)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  int *piVar5;
  long lVar6;
  long in_FS_OFFSET;
  bool bVar7;
  
  lVar6 = __size * __n;
  if (lVar6 == 0) {
    return 0;
  }
  if ((__s->_flags & 0x8000U) == 0) {
    lVar2 = *(long *)(in_FS_OFFSET + 0x10);
    piVar4 = (int *)__s->_lock;
    if (*(long *)(piVar4 + 2) != lVar2) {
      LOCK();
      iVar1 = *piVar4;
      if (iVar1 == 0) {
        *piVar4 = 1;
      }
      UNLOCK();
      if (iVar1 != 0) {
        __lll_lock_wait_private();
      }
      piVar4 = (int *)__s->_lock;
      *(long *)(piVar4 + 2) = lVar2;
    }
    piVar4[1] = piVar4[1] + 1;
  }
  if (__s->_mode == 0) {
    __s->_mode = -1;
LAB_006f4513:
    lVar2 = *(long *)(__s + 1);
    if (0x827 < lVar2 - 0x932180U) {
                    /* try { // try from 006f45f0 to 006f4604 has its CatchHandler @ 006f460a */
      _IO_vtable_check();
    }
                    /* try { // try from 006f4544 to 006f4547 has its CatchHandler @ 006f460a */
    uVar3 = (**(code **)(lVar2 + 0x38))(__s,__ptr,lVar6);
    bVar7 = uVar3 == 0xffffffffffffffff;
    if ((__s->_flags & 0x8000U) != 0) goto LAB_006f4579;
    piVar5 = (int *)__s->_lock;
    piVar4 = piVar5 + 1;
    *piVar4 = *piVar4 + -1;
    if (*piVar4 != 0) goto LAB_006f4579;
  }
  else {
    if (__s->_mode == -1) goto LAB_006f4513;
    if ((__s->_flags & 0x8000U) != 0) {
      return 0;
    }
    piVar5 = (int *)__s->_lock;
    piVar4 = piVar5 + 1;
    *piVar4 = *piVar4 + -1;
    if (*piVar4 != 0) {
      return 0;
    }
    bVar7 = false;
    uVar3 = 0;
  }
  piVar5[2] = 0;
  piVar5[3] = 0;
  LOCK();
  iVar1 = *piVar5;
  *piVar5 = 0;
  UNLOCK();
  if (1 < iVar1) {
    __lll_lock_wake_private();
  }
LAB_006f4579:
  if ((lVar6 - uVar3 != 0) && (!bVar7)) {
    __n = uVar3 / __size;
  }
  return __n;
}

