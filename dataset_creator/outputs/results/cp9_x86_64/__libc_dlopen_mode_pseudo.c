
undefined8 __libc_dlopen_mode(undefined8 param_1,undefined4 param_2)

{
  int iVar1;
  long in_FS_OFFSET;
  char local_49;
  undefined1 local_48 [8];
  long local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_40 = 0;
  local_38 = param_1;
  local_30 = param_2;
  iVar1 = _dl_catch_error(local_48,&local_40,&local_49,do_dlopen,&local_38);
  if ((iVar1 != 0) || (local_40 != 0)) {
    if (local_49 == '\0') {
      local_20 = 0;
    }
    else {
      _dl_error_free(local_40);
      local_20 = 0;
    }
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return local_20;
}

