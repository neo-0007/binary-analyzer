
void __nss_files_data_put(long param_1)

{
  int iVar1;
  
  LOCK();
  iVar1 = *(int *)(param_1 + 8);
  *(int *)(param_1 + 8) = 0;
  UNLOCK();
  if (iVar1 < 2) {
    return;
  }
  __lll_lock_wake_private(param_1 + 8);
  return;
}

