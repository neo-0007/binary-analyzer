
int usleep(__useconds_t __useconds)

{
  int iVar1;
  long in_FS_OFFSET;
  timespec local_28;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_28.tv_sec = (ulong)__useconds / 1000000;
  local_28.tv_nsec = (ulong)(__useconds + (int)local_28.tv_sec * -1000000) * 1000;
  iVar1 = nanosleep(&local_28,(timespec *)0x0);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

