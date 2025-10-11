
/* WARNING: Removing unreachable block (ram,0x00764a80) */
/* WARNING: Removing unreachable block (ram,0x00764a98) */

int poll(pollfd *__fds,nfds_t __nfds,int __timeout)

{
  undefined4 uVar1;
  long in_FS_OFFSET;
  
  if (*(int *)(in_FS_OFFSET + 0x18) == 0) {
    syscall();
    return 7;
  }
  uVar1 = __pthread_enable_asynccancel();
  syscall();
  __pthread_disable_asynccancel(uVar1,__nfds,__timeout);
  return 7;
}

