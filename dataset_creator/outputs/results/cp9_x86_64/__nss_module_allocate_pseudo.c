
undefined4 * __nss_module_allocate(char *param_1,size_t param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  bool bVar5;
  
  LOCK();
  bVar5 = nss_module_list_lock == 0;
  if (bVar5) {
    nss_module_list_lock = 1;
  }
  UNLOCK();
  puVar4 = nss_module_list;
  puVar1 = nss_module_list;
  if (!bVar5) {
    __lll_lock_wait_private(&nss_module_list_lock);
    puVar4 = nss_module_list;
    puVar1 = nss_module_list;
  }
  for (; puVar2 = nss_module_list, nss_module_list = puVar1, puVar4 != (undefined4 *)0x0;
      puVar4 = *(undefined4 **)(puVar4 + 0x84)) {
    iVar3 = strncmp((char *)(puVar4 + 0x86),param_1,param_2);
    if ((iVar3 == 0) && (*(char *)((long)puVar4 + param_2 + 0x218) == '\0')) goto LAB_00770322;
    puVar1 = nss_module_list;
    nss_module_list = puVar2;
  }
  puVar4 = (undefined4 *)malloc(param_2 + 0x219);
  if (puVar4 != (undefined4 *)0x0) {
    *puVar4 = 0;
    memcpy(puVar4 + 0x86,param_1,param_2);
    nss_module_list = puVar4;
    *(undefined1 *)((long)puVar4 + param_2 + 0x218) = 0;
    *(undefined8 *)(puVar4 + 0x82) = 0;
    *(undefined4 **)(puVar4 + 0x84) = puVar2;
  }
LAB_00770322:
  iVar3 = nss_module_list_lock;
  LOCK();
  nss_module_list_lock = 0;
  UNLOCK();
  if (1 < iVar3) {
    __lll_lock_wake_private(&nss_module_list_lock);
    return puVar4;
  }
  return puVar4;
}

