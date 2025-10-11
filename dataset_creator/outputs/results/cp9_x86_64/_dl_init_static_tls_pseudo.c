
void _dl_init_static_tls(long param_1)

{
  size_t sVar1;
  long lVar2;
  int iVar3;
  void *pvVar4;
  undefined8 *puVar5;
  bool bVar6;
  
  LOCK();
  bVar6 = _dl_stack_cache_lock == 0;
  if (bVar6) {
    _dl_stack_cache_lock = 1;
  }
  UNLOCK();
  if (!bVar6) {
    __lll_lock_wait_private(&_dl_stack_cache_lock);
  }
  puVar5 = _dl_stack_used;
  if ((undefined8 **)_dl_stack_used != &_dl_stack_used) {
    do {
      sVar1 = *(size_t *)(param_1 + 0x438);
      lVar2 = *(long *)(param_1 + 0x440);
      pvVar4 = mempcpy((void *)((-0x2c0 - *(long *)(param_1 + 0x458)) + (long)puVar5),
                       *(void **)(param_1 + 0x430),sVar1);
      memset(pvVar4,0,lVar2 - sVar1);
      puVar5 = (undefined8 *)*puVar5;
    } while ((undefined8 **)puVar5 != &_dl_stack_used);
  }
  puVar5 = _dl_stack_user;
  if ((undefined8 **)_dl_stack_user != &_dl_stack_user) {
    do {
      sVar1 = *(size_t *)(param_1 + 0x438);
      lVar2 = *(long *)(param_1 + 0x440);
      pvVar4 = mempcpy((void *)((-0x2c0 - *(long *)(param_1 + 0x458)) + (long)puVar5),
                       *(void **)(param_1 + 0x430),sVar1);
      memset(pvVar4,0,lVar2 - sVar1);
      puVar5 = (undefined8 *)*puVar5;
    } while ((undefined8 **)puVar5 != &_dl_stack_user);
  }
  iVar3 = _dl_stack_cache_lock;
  LOCK();
  _dl_stack_cache_lock = 0;
  UNLOCK();
  if (1 < iVar3) {
    __lll_lock_wake_private(&_dl_stack_cache_lock);
    return;
  }
  return;
}

