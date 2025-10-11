
/* WARNING: Removing unreachable block (ram,0x007676d8) */
/* WARNING: Removing unreachable block (ram,0x007676c0) */

ssize_t recvmsg(int __fd,msghdr *__message,int __flags)

{
  undefined4 uVar1;
  long in_FS_OFFSET;
  
  if (*(int *)(in_FS_OFFSET + 0x18) == 0) {
    syscall();
    return 0x2f;
  }
  uVar1 = __pthread_enable_asynccancel();
  syscall();
  __pthread_disable_asynccancel(uVar1,__message,__flags);
  return 0x2f;
}

