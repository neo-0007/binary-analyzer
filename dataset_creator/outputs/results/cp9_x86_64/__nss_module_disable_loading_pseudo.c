
void __nss_module_disable_loading(void)

{
  int iVar1;
  int *piVar2;
  bool bVar3;
  
  LOCK();
  bVar3 = nss_module_list_lock == 0;
  if (bVar3) {
    nss_module_list_lock = 1;
  }
  UNLOCK();
  iVar1 = nss_module_list_lock;
  piVar2 = nss_module_list;
  if (!bVar3) {
    __lll_lock_wait_private(&nss_module_list_lock);
    iVar1 = nss_module_list_lock;
    piVar2 = nss_module_list;
  }
  for (; piVar2 != (int *)0x0; piVar2 = *(int **)(piVar2 + 0x84)) {
    while (*piVar2 != 0) {
      piVar2 = *(int **)(piVar2 + 0x84);
      if (piVar2 == (int *)0x0) goto LAB_007704c0;
    }
    nss_module_list_lock = iVar1;
    *piVar2 = 2;
    iVar1 = nss_module_list_lock;
  }
LAB_007704c0:
  LOCK();
  nss_module_list_lock = 0;
  UNLOCK();
  if (1 < iVar1) {
    __lll_lock_wake_private(&nss_module_list_lock);
    return;
  }
  return;
}

