
/* WARNING: Removing unreachable block (ram,0x00764d58) */

undefined8 __openat_nocancel(void)

{
  long in_FS_OFFSET;
  
  syscall();
  if (*(long *)(in_FS_OFFSET + 0x28) == *(long *)(in_FS_OFFSET + 0x28)) {
    return 0x101;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

