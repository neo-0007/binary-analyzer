
int isatty(int __fd)

{
  int iVar1;
  long in_FS_OFFSET;
  termios tStack_58;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = tcgetattr(__fd,&tStack_58);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (int)(iVar1 == 0);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

