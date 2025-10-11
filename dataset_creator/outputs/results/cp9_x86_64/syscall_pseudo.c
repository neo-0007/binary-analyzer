
long syscall(long __sysno,...)

{
  long in_FS_OFFSET;
  
  syscall();
  if ((ulong)__sysno < 0xfffffffffffff001) {
    return __sysno;
  }
  *(int *)(in_FS_OFFSET + -0x58) = -(int)__sysno;
  return -1;
}

