
/* WARNING: Removing unreachable block (ram,0x007b6b65) */
/* WARNING: Removing unreachable block (ram,0x007b6bd8) */
/* WARNING: Removing unreachable block (ram,0x007b6be9) */
/* WARNING: Removing unreachable block (ram,0x007b6bf4) */
/* WARNING: Removing unreachable block (ram,0x007b6c3b) */
/* WARNING: Removing unreachable block (ram,0x007b6c5a) */
/* WARNING: Removing unreachable block (ram,0x007b6cc8) */
/* WARNING: Removing unreachable block (ram,0x007b6c78) */
/* WARNING: Removing unreachable block (ram,0x007b6c7d) */
/* WARNING: Removing unreachable block (ram,0x007b6bfa) */
/* WARNING: Removing unreachable block (ram,0x007b6c96) */
/* WARNING: Removing unreachable block (ram,0x007b6c0a) */

int clock_nanosleep(clockid_t __clock_id,int __flags,timespec *__req,timespec *__rem)

{
  long lVar1;
  undefined4 uVar2;
  int iVar3;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (__clock_id == 3) {
    iVar3 = 0x16;
  }
  else {
    if (*(int *)(in_FS_OFFSET + 0x18) == 0) {
      syscall();
    }
    else {
      uVar2 = __pthread_enable_asynccancel();
      syscall();
      __pthread_disable_asynccancel(uVar2,__flags,__req);
    }
    iVar3 = -0xe6;
  }
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return iVar3;
}

