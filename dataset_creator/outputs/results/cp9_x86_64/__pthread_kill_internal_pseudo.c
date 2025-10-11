
/* WARNING: Removing unreachable block (ram,0x00700002) */

undefined4 __pthread_kill_internal(long param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  __pid_t _Var3;
  undefined1 *puVar4;
  long in_FS_OFFSET;
  undefined1 auStack_b8 [136];
  long local_30;
  
  puVar4 = auStack_b8;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == *(long *)(in_FS_OFFSET + 0x10)) {
    syscall();
    _Var3 = getpid();
    puVar4 = (undefined1 *)0xba;
    syscall();
  }
  else {
    syscall();
    piVar1 = (int *)(param_1 + 0x974);
    LOCK();
    iVar2 = *piVar1;
    if (iVar2 == 0) {
      *piVar1 = 1;
    }
    UNLOCK();
    if (iVar2 != 0) {
      __lll_lock_wait_private(piVar1,sigall_set);
    }
    if (*(char *)(param_1 + 0x973) == '\0') {
      getpid();
      syscall();
    }
    LOCK();
    iVar2 = *(int *)(param_1 + 0x974);
    *(int *)(param_1 + 0x974) = 0;
    UNLOCK();
    if (1 < iVar2) {
      __lll_lock_wake_private(piVar1);
    }
    param_2 = 0;
    _Var3 = 2;
    syscall();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local(_Var3,puVar4,param_2);
}

