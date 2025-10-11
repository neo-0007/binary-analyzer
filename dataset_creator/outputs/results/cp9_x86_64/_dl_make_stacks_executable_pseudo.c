
int _dl_make_stacks_executable(ulong *param_1)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  long in_FS_OFFSET;
  bool bVar4;
  
  iVar2 = mprotect((void *)(-_dl_pagesize & *param_1),_dl_pagesize,__stack_prot);
  if (iVar2 == 0) {
    *param_1 = 0;
    _dl_stack_flags = _dl_stack_flags | 1;
  }
  else if (*(int *)(in_FS_OFFSET + -0x58) != 0) {
    return *(int *)(in_FS_OFFSET + -0x58);
  }
  LOCK();
  bVar4 = _dl_stack_cache_lock == 0;
  if (bVar4) {
    _dl_stack_cache_lock = 1;
  }
  UNLOCK();
  if (!bVar4) {
    __lll_lock_wait_private(&_dl_stack_cache_lock);
  }
  puVar3 = _dl_stack_used;
  if ((undefined8 **)_dl_stack_used != &_dl_stack_used) {
    do {
      iVar2 = mprotect((void *)(puVar3[0x7c] + puVar3[0x7a]),puVar3[0x7b] - puVar3[0x7c],7);
      if ((iVar2 != 0) && (iVar2 = *(int *)(in_FS_OFFSET + -0x58), iVar2 != 0)) goto LAB_007bdf1c;
      puVar3 = (undefined8 *)*puVar3;
    } while ((undefined8 **)puVar3 != &_dl_stack_used);
  }
  puVar3 = _dl_stack_cache;
  if ((undefined8 **)_dl_stack_cache != &_dl_stack_cache) {
    do {
      while (iVar2 = mprotect((void *)(puVar3[0x7c] + puVar3[0x7a]),puVar3[0x7b] - puVar3[0x7c],7),
            iVar2 == 0) {
        puVar3 = (undefined8 *)*puVar3;
        if ((undefined8 **)puVar3 == &_dl_stack_cache) goto LAB_007bdf94;
      }
      iVar2 = *(int *)(in_FS_OFFSET + -0x58);
      if (iVar2 != 0) goto LAB_007bdf1c;
      puVar3 = (undefined8 *)*puVar3;
    } while ((undefined8 **)puVar3 != &_dl_stack_cache);
  }
LAB_007bdf94:
  iVar2 = 0;
LAB_007bdf1c:
  iVar1 = _dl_stack_cache_lock;
  LOCK();
  _dl_stack_cache_lock = 0;
  UNLOCK();
  if (1 < iVar1) {
    __lll_lock_wake_private(&_dl_stack_cache_lock);
  }
  return iVar2;
}

