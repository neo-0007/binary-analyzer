
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __lll_elision_init(void)

{
  long in_FS_OFFSET;
  undefined1 local_14 [4];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  __tunable_get_val(8,local_14,_dl_tunable_set_elision_enable);
  __tunable_get_val(0xd,local_14,_dl_tunable_set_elision_skip_lock_busy);
  __tunable_get_val(0x19,local_14,_dl_tunable_set_elision_skip_lock_internal_abort);
  __tunable_get_val(7,local_14,_dl_tunable_set_elision_retry_try_xbegin);
  __tunable_get_val(0x15,local_14,_dl_tunable_set_elision_skip_trylock_internal_abort);
  if (__pthread_force_elision == 0) {
    _DAT_009320d8 = 0;
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

