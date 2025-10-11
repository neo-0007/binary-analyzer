
/* WARNING: Removing unreachable block (ram,0x007640d0) */
/* WARNING: Removing unreachable block (ram,0x007640e8) */

ssize_t write(int __fd,void *__buf,size_t __n)

{
  undefined4 uVar1;
  long in_FS_OFFSET;
  
  if (*(int *)(in_FS_OFFSET + 0x18) == 0) {
    syscall();
    return 1;
  }
  uVar1 = __pthread_enable_asynccancel();
  syscall();
  __pthread_disable_asynccancel(uVar1,__buf,__n);
  return 1;
}

