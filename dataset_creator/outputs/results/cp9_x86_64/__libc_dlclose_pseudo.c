
ulong __libc_dlclose(undefined8 param_1)

{
  ulong uVar1;
  long in_FS_OFFSET;
  char local_21;
  undefined1 local_20 [8];
  long local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = 0;
  uVar1 = _dl_catch_error(local_20,&local_18,&local_21,do_dlclose,param_1);
  if ((int)uVar1 == 0) {
    if (local_18 == 0) goto LAB_00784aab;
    uVar1 = 1;
  }
  if (local_21 != '\0') {
    _dl_error_free(local_18);
    uVar1 = uVar1 & 0xffffffff;
  }
LAB_00784aab:
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

