
/* WARNING: Removing unreachable block (ram,0x007a2380) */
/* WARNING: Removing unreachable block (ram,0x007a2398) */

ssize_t readv(int __fd,iovec *__iovec,int __count)

{
  undefined4 uVar1;
  long in_FS_OFFSET;
  
  if (*(int *)(in_FS_OFFSET + 0x18) == 0) {
    syscall();
    return 0x13;
  }
  uVar1 = __pthread_enable_asynccancel();
  syscall();
  __pthread_disable_asynccancel(uVar1,__iovec,__count);
  return 0x13;
}

