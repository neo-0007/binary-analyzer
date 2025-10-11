
/* WARNING: Removing unreachable block (ram,0x00766c4c) */

int __get_nprocs_sched(void)

{
  int iVar1;
  long in_FS_OFFSET;
  cpu_set_t acStack_1018 [32];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  syscall();
  iVar1 = __sched_cpucount(0xcc,acStack_1018);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return iVar1;
}

