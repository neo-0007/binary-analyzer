
/* WARNING: Removing unreachable block (ram,0x00763f88) */
/* WARNING: Removing unreachable block (ram,0x00763fa0) */

int open64(char *__file,int __oflag,...)

{
  long lVar1;
  undefined4 uVar2;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)(in_FS_OFFSET + 0x18) == 0) {
    syscall();
  }
  else {
    uVar2 = __pthread_enable_asynccancel();
    syscall();
    __pthread_disable_asynccancel(uVar2,__file,__oflag);
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 0x101;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

