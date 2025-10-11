
/* WARNING: Removing unreachable block (ram,0x007a25d0) */
/* WARNING: Removing unreachable block (ram,0x007a25e8) */

ssize_t send(int __fd,void *__buf,size_t __n,int __flags)

{
  undefined4 uVar1;
  long in_FS_OFFSET;
  
  if (*(int *)(in_FS_OFFSET + 0x18) == 0) {
    syscall();
    return 0x2c;
  }
  uVar1 = __pthread_enable_asynccancel();
  syscall();
  __pthread_disable_asynccancel(uVar1,__buf,__n);
  return 0x2c;
}

