
/* WARNING: Removing unreachable block (ram,0x00764290) */
/* WARNING: Removing unreachable block (ram,0x007642a8) */

int close(int __fd)

{
  undefined4 uVar1;
  long in_FS_OFFSET;
  
  if (*(int *)(in_FS_OFFSET + 0x18) == 0) {
    syscall();
    return 3;
  }
  uVar1 = __pthread_enable_asynccancel();
  syscall();
  __pthread_disable_asynccancel(uVar1);
  return 3;
}

