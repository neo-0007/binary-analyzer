
/* WARNING: Removing unreachable block (ram,0x00764048) */

ssize_t read(int __fd,void *__buf,size_t __nbytes)

{
  uint uVar1;
  undefined4 uVar2;
  long in_FS_OFFSET;
  
  uVar1 = *(uint *)(in_FS_OFFSET + 0x18);
  if (uVar1 != 0) {
    uVar2 = __pthread_enable_asynccancel();
    syscall();
    __pthread_disable_asynccancel(uVar2,__buf,__nbytes);
    return 0;
  }
  syscall();
  if (0xfffffffffffff000 < (ulong)uVar1) {
    *(undefined4 *)(in_FS_OFFSET + -0x58) = 0;
    return -1;
  }
  return (ulong)uVar1;
}

