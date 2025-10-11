
void __nptl_deallocate_stack(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  int iVar4;
  bool bVar5;
  
  LOCK();
  bVar5 = _dl_stack_cache_lock == 0;
  if (bVar5) {
    _dl_stack_cache_lock = 1;
  }
  UNLOCK();
  if (!bVar5) {
    __lll_lock_wait_private(&_dl_stack_cache_lock);
  }
  lVar1 = param_1 + 0x2c0;
  lVar2 = *(long *)(param_1 + 0x2c0);
  plVar3 = *(long **)(param_1 + 0x2c8);
  *(long **)(lVar2 + 8) = plVar3;
  *plVar3 = lVar2;
  _dl_in_flight_stack = 0;
  if (*(char *)(param_1 + 0x612) == '\0') {
    *(long **)(param_1 + 0x2c8) = &_dl_stack_cache;
    *(long *)(param_1 + 0x2c0) = _dl_stack_cache;
    *(long *)(_dl_stack_cache + 8) = lVar1;
    _dl_in_flight_stack = 0;
    _dl_stack_cache_actsize = _dl_stack_cache_actsize + *(long *)(param_1 + 0x698);
    _dl_stack_cache = lVar1;
    if (__nptl_stack_cache_maxsize < _dl_stack_cache_actsize) {
      __nptl_free_stacks();
    }
  }
  else {
    _dl_deallocate_tls(param_1,0);
  }
  iVar4 = _dl_stack_cache_lock;
  LOCK();
  _dl_stack_cache_lock = 0;
  UNLOCK();
  if (1 < iVar4) {
    __lll_lock_wake_private(&_dl_stack_cache_lock);
    return;
  }
  return;
}

