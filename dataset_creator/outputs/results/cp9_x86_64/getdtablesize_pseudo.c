
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* WARNING: Enum "__rlimit_resource": Some values do not have unique names */

int getdtablesize(void)

{
  int iVar1;
  int iVar2;
  long in_FS_OFFSET;
  rlimit local_28;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = getrlimit64(RLIMIT_NOFILE,&local_28);
  iVar2 = 0x100;
  if (-1 < iVar1) {
    iVar2 = (int)local_28.rlim_cur;
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

