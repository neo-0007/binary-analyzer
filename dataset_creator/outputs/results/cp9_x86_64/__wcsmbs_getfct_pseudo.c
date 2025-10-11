
undefined8 __wcsmbs_getfct(undefined8 param_1,undefined8 param_2,ulong *param_3)

{
  int iVar1;
  long in_FS_OFFSET;
  ulong local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = __gconv_find_transform(param_1,param_2,&local_18,&local_20,0);
  if (iVar1 == 0) {
    if (local_20 < 2) {
      *param_3 = local_20;
    }
    else {
      __gconv_close_transform(local_18);
      local_18 = 0;
    }
  }
  else {
    local_18 = 0;
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_18;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

