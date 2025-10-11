
int brk(void *__addr)

{
  long in_FS_OFFSET;
  
  syscall();
  __curbrk = 0xc;
  if (__addr < (void *)0xd) {
    return 0;
  }
  *(undefined4 *)(in_FS_OFFSET + -0x58) = 0xc;
  return -1;
}

