
/* WARNING: Removing unreachable block (ram,0x00767570) */
/* WARNING: Removing unreachable block (ram,0x00767588) */

int connect(int __fd,sockaddr *__addr,socklen_t __len)

{
  undefined4 uVar1;
  long in_FS_OFFSET;
  
  if (*(int *)(in_FS_OFFSET + 0x18) == 0) {
    syscall();
    return 0x2a;
  }
  uVar1 = __pthread_enable_asynccancel();
  syscall();
  __pthread_disable_asynccancel(uVar1,__addr,__len);
  return 0x2a;
}

