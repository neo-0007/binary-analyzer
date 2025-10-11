
/* WARNING: Removing unreachable block (ram,0x00700172) */

int pthread_kill(pthread_t __threadid,int __signo)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined4 in_register_00000034;
  undefined1 *puVar4;
  int iVar5;
  long in_FS_OFFSET;
  undefined1 auStack_b8 [136];
  long local_30;
  
  iVar5 = 0x16;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  puVar4 = (undefined1 *)CONCAT44(in_register_00000034,__signo);
  uVar3 = __signo - 0x20U;
  if (1 < __signo - 0x20U) {
    if (__threadid == *(pthread_t *)(in_FS_OFFSET + 0x10)) {
      syscall();
      uVar3 = getpid();
      puVar4 = (undefined1 *)0xba;
      __threadid = (pthread_t)uVar3;
      syscall();
      iVar5 = 0;
      uVar3 = __signo;
    }
    else {
      syscall();
      piVar1 = (int *)(__threadid + 0x974);
      LOCK();
      iVar5 = *piVar1;
      if (iVar5 == 0) {
        *piVar1 = 1;
      }
      UNLOCK();
      if (iVar5 != 0) {
        __lll_lock_wait_private(piVar1,sigall_set);
      }
      if (*(char *)(__threadid + 0x973) == '\0') {
        getpid();
        syscall();
      }
      iVar5 = 0;
      LOCK();
      iVar2 = *(int *)(__threadid + 0x974);
      *(int *)(__threadid + 0x974) = 0;
      UNLOCK();
      if (1 < iVar2) {
        __lll_lock_wake_private(piVar1);
      }
      __threadid = 2;
      syscall();
      puVar4 = auStack_b8;
      uVar3 = 0;
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local(__threadid,puVar4,uVar3);
}

