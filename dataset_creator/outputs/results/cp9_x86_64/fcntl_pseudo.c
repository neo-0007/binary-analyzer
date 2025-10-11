
/* WARNING: Removing unreachable block (ram,0x007641b3) */
/* WARNING: Removing unreachable block (ram,0x00764218) */

int fcntl(int __fd,int __cmd,...)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 in_RDX;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if ((__cmd == 7) || (__cmd == 0x26)) {
    if (*(int *)(in_FS_OFFSET + 0x18) == 0) {
      iVar2 = 0x48;
      syscall();
    }
    else {
      uVar3 = __pthread_enable_asynccancel();
      syscall();
      __pthread_disable_asynccancel(uVar3,__cmd,in_RDX);
      iVar2 = 0x48;
    }
  }
  else {
    iVar2 = __fcntl64_nocancel_adjusted();
  }
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return iVar2;
}

