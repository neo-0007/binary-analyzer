
/* WARNING: Removing unreachable block (ram,0x00764ffd) */
/* WARNING: Removing unreachable block (ram,0x00765080) */

int tcgetattr(int __fd,termios *__termios_p)

{
  long in_FS_OFFSET;
  undefined1 local_38 [40];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  syscall();
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local(__fd,0x5401,local_38);
  }
  return 0x10;
}

