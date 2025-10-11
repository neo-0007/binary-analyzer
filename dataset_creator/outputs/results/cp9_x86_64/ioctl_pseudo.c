
/* WARNING: Removing unreachable block (ram,0x00765218) */

int ioctl(int __fd,ulong __request,...)

{
  long in_FS_OFFSET;
  
  syscall();
  if (*(long *)(in_FS_OFFSET + 0x28) != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return 0x10;
}

