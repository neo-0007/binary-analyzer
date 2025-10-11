
undefined8 __nss_files_data_endent(ulong param_1)

{
  int *piVar1;
  int iVar2;
  FILE *__stream;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  
  lVar3 = nss_files_global;
  if (nss_files_global != 0) {
    lVar4 = (param_1 & 0xffffffff) * 0x10;
    piVar1 = (int *)(nss_files_global + 8 + lVar4);
    LOCK();
    iVar2 = *piVar1;
    if (iVar2 == 0) {
      *piVar1 = 1;
    }
    UNLOCK();
    if (iVar2 != 0) {
      __lll_lock_wait_private(piVar1);
    }
    puVar5 = (undefined8 *)(lVar3 + lVar4);
    __stream = (FILE *)*puVar5;
    if (__stream != (FILE *)0x0) {
      fclose(__stream);
      *puVar5 = 0;
    }
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = 0;
    UNLOCK();
    if (1 < iVar2) {
      __lll_lock_wake_private(piVar1);
    }
  }
  return 1;
}

