
/* WARNING: Removing unreachable block (ram,0x00767760) */
/* WARNING: Removing unreachable block (ram,0x00767778) */

ssize_t sendmsg(int __fd,msghdr *__message,int __flags)

{
  undefined4 uVar1;
  long in_FS_OFFSET;
  
  if (*(int *)(in_FS_OFFSET + 0x18) == 0) {
    syscall();
    return 0x2e;
  }
  uVar1 = __pthread_enable_asynccancel();
  syscall();
  __pthread_disable_asynccancel(uVar1,__message,__flags);
  return 0x2e;
}

