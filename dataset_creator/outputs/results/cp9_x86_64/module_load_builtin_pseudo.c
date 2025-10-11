
undefined8 module_load_builtin(uint *param_1,code *param_2)

{
  long lVar1;
  ulong uVar2;
  int iVar3;
  long lVar4;
  long in_FS_OFFSET;
  bool bVar5;
  
  LOCK();
  bVar5 = nss_module_list_lock == 0;
  if (bVar5) {
    nss_module_list_lock = 1;
  }
  UNLOCK();
  if (!bVar5) {
    __lll_lock_wait_private(&nss_module_list_lock);
  }
  if ((*param_1 & 0xfffffffd) == 0) {
    (*param_2)(param_1 + 2);
    lVar4 = 0;
    do {
      lVar1 = lVar4 * 2;
      iVar3 = (int)lVar4;
      lVar4 = lVar4 + 1;
      uVar2 = *(ulong *)(param_1 + lVar1 + 2) ^ *(ulong *)(in_FS_OFFSET + 0x30);
      *(ulong *)(param_1 + (long)iVar3 * 2 + 2) = uVar2 << 0x11 | uVar2 >> 0x2f;
    } while (lVar4 != 0x40);
    param_1[0x82] = 0;
    param_1[0x83] = 0;
    *param_1 = 1;
  }
  iVar3 = nss_module_list_lock;
  LOCK();
  nss_module_list_lock = 0;
  UNLOCK();
  if (1 < iVar3) {
    __lll_lock_wake_private(&nss_module_list_lock);
    return 1;
  }
  return 1;
}

