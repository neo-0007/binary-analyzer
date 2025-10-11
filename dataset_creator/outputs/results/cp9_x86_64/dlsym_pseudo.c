
undefined8 dlsym(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = param_1;
  uStack_40 = param_2;
  pthread_mutex_lock((pthread_mutex_t *)_dl_load_lock);
  iVar1 = _dlerror_run(dlsym_doit,&local_48);
  uVar2 = 0;
  if (iVar1 == 0) {
    uVar2 = local_30;
  }
  pthread_mutex_unlock((pthread_mutex_t *)_dl_load_lock);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

