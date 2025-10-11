
/* WARNING: Removing unreachable block (ram,0x007674a0) */
/* WARNING: Removing unreachable block (ram,0x007674b8) */

int accept(int __fd,sockaddr *__addr,socklen_t *__addr_len)

{
  undefined4 uVar1;
  long in_FS_OFFSET;
  
  if (*(int *)(in_FS_OFFSET + 0x18) == 0) {
    syscall();
    return 0x2b;
  }
  uVar1 = __pthread_enable_asynccancel();
  syscall();
  __pthread_disable_asynccancel(uVar1,__addr,__addr_len);
  return 0x2b;
}

