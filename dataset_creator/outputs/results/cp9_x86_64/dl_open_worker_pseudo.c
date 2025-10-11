
void dl_open_worker(long param_1)

{
  long lVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 in_R8;
  undefined8 in_R9;
  long local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  
  *(undefined1 *)(param_1 + 0x2d) = 0;
  pthread_mutex_lock((pthread_mutex_t *)_dl_load_tls_lock);
  uVar2 = _dl_catch_exception(&local_48,dl_open_worker_begin,param_1);
  pthread_mutex_unlock((pthread_mutex_t *)_dl_load_tls_lock);
  if (CONCAT44(uStack_3c,local_40) != 0) {
    puVar4 = (undefined8 *)(ulong)uVar2;
    uVar3 = _dl_signal_exception(puVar4,&local_48,0);
                    /* WARNING: Subroutine does not return */
    _dl_signal_error(0xc,*puVar4,0,"cannot extend global scope",in_R8,in_R9,uVar3);
  }
  if (*(char *)(param_1 + 0x2d) != '\0') {
    uVar2 = *(uint *)(param_1 + 8);
    lVar1 = *(long *)(param_1 + 0x18);
    local_40 = *(undefined4 *)(param_1 + 0x30);
    local_38 = *(undefined8 *)(param_1 + 0x38);
    uStack_30 = *(undefined8 *)(param_1 + 0x40);
    local_48 = lVar1;
    _dl_catch_exception(0,call_dl_init,&local_48);
    if ((uVar2 & 0x100) != 0) {
      add_to_global_update(lVar1);
    }
    if (((byte)_dl_debug_mask & 0x40) != 0) {
      _dl_debug_printf("opening file=%s [%lu]; direct_opencount=%u\n\n",*(undefined8 *)(lVar1 + 8),
                       *(undefined8 *)(lVar1 + 0x30),*(undefined4 *)(lVar1 + 0x318));
      return;
    }
  }
  return;
}

