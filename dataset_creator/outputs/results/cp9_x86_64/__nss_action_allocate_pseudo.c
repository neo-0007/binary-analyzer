
undefined8 * __nss_action_allocate(void *param_1,long param_2)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *__dest;
  size_t __size;
  bool bVar6;
  
  LOCK();
  bVar6 = nss_actions_lock == 0;
  if (bVar6) {
    nss_actions_lock = 1;
  }
  UNLOCK();
  puVar4 = nss_actions;
  if (!bVar6) {
    __lll_lock_wait_private(&nss_actions_lock);
    puVar4 = nss_actions;
  }
  for (; puVar2 = nss_actions, puVar4 != (undefined8 *)0x0; puVar4 = (undefined8 *)*puVar4) {
    if (param_2 == puVar4[1]) {
      __dest = puVar4 + 2;
      if (param_2 == 0) goto LAB_007bdde4;
      lVar3 = 0;
      lVar5 = 0;
      while ((*(long *)((long)puVar4 + lVar3 + 0x10) == *(long *)((long)param_1 + lVar3) &&
             (*(int *)((long)puVar4 + lVar3 + 0x18) == *(int *)((long)param_1 + lVar3 + 8)))) {
        lVar5 = lVar5 + 1;
        lVar3 = lVar3 + 0x10;
        if (param_2 == lVar5) goto LAB_007bdde4;
      }
    }
  }
  __size = (param_2 + 1) * 0x10;
  puVar4 = (undefined8 *)malloc(__size);
  if (puVar4 == (undefined8 *)0x0) {
    __dest = (undefined8 *)0x0;
  }
  else {
    __dest = puVar4 + 2;
    *puVar4 = puVar2;
    puVar4[1] = param_2;
    memcpy(__dest,param_1,__size - 0x10);
    nss_actions = puVar4;
  }
LAB_007bdde4:
  iVar1 = nss_actions_lock;
  LOCK();
  nss_actions_lock = 0;
  UNLOCK();
  if (1 < iVar1) {
    __lll_lock_wake_private(&nss_actions_lock);
  }
  return __dest;
}

