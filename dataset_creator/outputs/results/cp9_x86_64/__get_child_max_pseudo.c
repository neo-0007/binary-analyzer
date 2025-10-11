
/* WARNING: Enum "__rlimit_resource": Some values do not have unique names */

rlim_t __get_child_max(void)

{
  int iVar1;
  long in_FS_OFFSET;
  rlimit local_28;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = getrlimit64(__RLIMIT_NPROC,&local_28);
  if (iVar1 != 0) {
    local_28.rlim_cur = 0xffffffffffffffff;
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return local_28.rlim_cur;
}

