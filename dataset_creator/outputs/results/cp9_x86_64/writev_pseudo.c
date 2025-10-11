
/* WARNING: Removing unreachable block (ram,0x007652b0) */
/* WARNING: Removing unreachable block (ram,0x007652c8) */

ssize_t writev(int __fd,iovec *__iovec,int __count)

{
  undefined4 uVar1;
  long in_FS_OFFSET;
  
  if (*(int *)(in_FS_OFFSET + 0x18) == 0) {
    syscall();
    return 0x14;
  }
  uVar1 = __pthread_enable_asynccancel();
  syscall();
  __pthread_disable_asynccancel(uVar1,__iovec,__count);
  return 0x14;
}

