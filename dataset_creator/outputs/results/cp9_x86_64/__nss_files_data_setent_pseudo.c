
int __nss_files_data_setent(ulong param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  FILE *__stream;
  long lVar3;
  long lVar4;
  long *plVar5;
  int iVar6;
  long in_FS_OFFSET;
  
  lVar3 = nss_files_global;
  if ((nss_files_global == 0) &&
     (lVar3 = __libc_allocate_once_slow(&nss_files_global,nss_files_global_allocate,0,0), lVar3 == 0
     )) {
    iVar6 = -2;
  }
  else {
    lVar4 = (param_1 & 0xffffffff) * 0x10;
    piVar1 = (int *)(lVar3 + 8 + lVar4);
    LOCK();
    iVar6 = *piVar1;
    if (iVar6 == 0) {
      *piVar1 = 1;
    }
    UNLOCK();
    if (iVar6 != 0) {
      __lll_lock_wait_private(piVar1);
    }
    plVar5 = (long *)(lVar3 + lVar4);
    __stream = (FILE *)*plVar5;
    if (__stream == (FILE *)0x0) {
      iVar6 = 1;
      lVar3 = __nss_files_fopen(param_2);
      *plVar5 = lVar3;
      if (lVar3 == 0) {
        iVar6 = (*(int *)(in_FS_OFFSET + -0x58) != 0xb) - 2;
      }
    }
    else {
      rewind(__stream);
      iVar6 = 1;
    }
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = 0;
    UNLOCK();
    if (1 < iVar2) {
      __lll_lock_wake_private(piVar1);
    }
  }
  return iVar6;
}

