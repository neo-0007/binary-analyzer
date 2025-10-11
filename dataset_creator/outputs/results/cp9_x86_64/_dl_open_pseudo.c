
long _dl_open(ulong param_1,uint param_2,undefined8 param_3,long param_4,undefined4 param_5,
             undefined8 param_6,undefined8 param_7)

{
  uint uVar1;
  long lVar2;
  undefined1 local_a8 [8];
  long local_a0;
  ulong local_88;
  uint local_80;
  undefined8 local_78;
  long local_70;
  long local_68;
  undefined4 local_60;
  char local_5c;
  undefined4 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  if ((param_2 & 3) != 0) {
    pthread_mutex_lock((pthread_mutex_t *)_dl_load_lock);
    if (param_4 == -1) {
      pthread_mutex_unlock((pthread_mutex_t *)_dl_load_lock);
                    /* WARNING: Subroutine does not return */
      _dl_signal_error(0x16,param_1,0,"no more namespaces available for dlmopen()");
    }
    if ((param_4 + 2U & 0xfffffffffffffffd) != 0) {
                    /* WARNING: Subroutine does not return */
      _dl_signal_error(0x16,param_1,0,"invalid target namespace in dlmopen()");
    }
    uStack_48 = param_7;
    local_70 = 0;
    local_88 = param_1;
    local_80 = param_2;
    local_78 = param_3;
    local_68 = param_4;
    local_58 = param_5;
    local_50 = param_6;
    uVar1 = _dl_catch_exception(local_a8,dl_open_worker,&local_88);
    param_1 = (ulong)uVar1;
    _dl_unload_cache();
    if (-1 < local_68) {
      *(undefined4 *)(&DAT_00931b9c + local_68 * 0xa0) = local_60;
    }
    if (local_a0 == 0) {
      lVar2 = _dl_debug_update();
      if (*(int *)(lVar2 + 0x18) == 0) {
        pthread_mutex_unlock((pthread_mutex_t *)_dl_load_lock);
        return local_70;
      }
                    /* WARNING: Subroutine does not return */
      __assert_fail("_dl_debug_update (args.nsid)->r_state == RT_CONSISTENT","dl-open.c",0x3a1,
                    "_dl_open");
    }
    if (local_5c == '\0') {
      *(undefined8 *)(&DAT_00931ba0 + local_68 * 0xa0) = 0;
    }
    if (local_70 != 0) {
      _dl_close_worker(local_70,1);
    }
    pthread_mutex_unlock((pthread_mutex_t *)_dl_load_lock);
    _dl_signal_exception(param_1,local_a8,0);
  }
                    /* WARNING: Subroutine does not return */
  _dl_signal_error(0x16,param_1,0,"invalid mode for dlopen()");
}

