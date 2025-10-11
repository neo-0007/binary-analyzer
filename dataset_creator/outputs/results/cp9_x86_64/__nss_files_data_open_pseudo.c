
int __nss_files_data_open
              (long *param_1,uint param_2,undefined8 param_3,undefined4 *param_4,undefined4 *param_5
              )

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  long *plVar4;
  long lVar5;
  int iVar6;
  long in_FS_OFFSET;
  bool bVar7;
  
  lVar5 = nss_files_global;
  if ((nss_files_global == 0) &&
     (lVar5 = __libc_allocate_once_slow(&nss_files_global,nss_files_global_allocate,0,0), lVar5 == 0
     )) {
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = *(undefined4 *)(in_FS_OFFSET + -0x58);
    }
    iVar6 = -2;
    if (param_5 != (undefined4 *)0x0) {
      *(undefined4 *)(in_FS_OFFSET + -0x18) = 0xffffffff;
      *param_5 = 0xffffffff;
    }
  }
  else {
    piVar1 = (int *)(lVar5 + 8 + (ulong)param_2 * 0x10);
    *param_1 = lVar5 + (ulong)param_2 * 0x10;
    LOCK();
    bVar7 = *piVar1 == 0;
    if (bVar7) {
      *piVar1 = 1;
    }
    UNLOCK();
    if (!bVar7) {
      __lll_lock_wait_private();
    }
    plVar4 = (long *)*param_1;
    iVar6 = 1;
    if (*plVar4 == 0) {
      uVar3 = *(undefined4 *)(in_FS_OFFSET + -0x58);
      lVar5 = __nss_files_fopen(param_3);
      *plVar4 = lVar5;
      if (lVar5 == 0) {
        iVar6 = *(int *)(in_FS_OFFSET + -0x58);
        *(undefined4 *)(in_FS_OFFSET + -0x58) = uVar3;
        lVar5 = *param_1;
        iVar6 = (iVar6 != 0xb) - 2;
        LOCK();
        piVar1 = (int *)(lVar5 + 8);
        iVar2 = *piVar1;
        *piVar1 = 0;
        UNLOCK();
        if (1 < iVar2) {
          __lll_lock_wake_private(lVar5 + 8);
        }
      }
      else {
        *(undefined4 *)(in_FS_OFFSET + -0x58) = uVar3;
      }
    }
  }
  return iVar6;
}

