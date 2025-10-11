
void __pthread_tunables_init(void)

{
  long in_FS_OFFSET;
  undefined1 auStack_18 [8];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  __tunable_get_val(0x1f,auStack_18,_dl_tunable_set_mutex_spin_count);
  __tunable_get_val(0x12,auStack_18,_dl_tunable_set_stack_cache_size);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

