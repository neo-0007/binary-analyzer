
long __libc_dlsym(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  long in_FS_OFFSET;
  char local_49;
  undefined1 local_48 [8];
  long local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  long *local_28;
  long local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_40 = 0;
  local_38 = param_1;
  uStack_30 = param_2;
  iVar1 = _dl_catch_error(local_48,&local_40,&local_49,do_dlsym,&local_38);
  if ((iVar1 == 0) && (local_40 == 0)) {
    if (local_20 != 0) {
      if (*(short *)(local_20 + 6) == -0xf) {
        lVar2 = 0;
      }
      else {
        lVar2 = 0;
        if (local_28 != (long *)0x0) {
          lVar2 = *local_28;
        }
      }
      local_20 = lVar2 + *(long *)(local_20 + 8);
    }
  }
  else if (local_49 == '\0') {
    local_20 = 0;
  }
  else {
    _dl_error_free(local_40);
    local_20 = 0;
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_20;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

