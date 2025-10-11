
/* WARNING: Removing unreachable block (ram,0x00765510) */
/* WARNING: Removing unreachable block (ram,0x00765530) */

int select(int __nfds,fd_set *__readfds,fd_set *__writefds,fd_set *__exceptfds,timeval *__timeout)

{
  long lVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 in_register_0000003c;
  ulong uVar4;
  long *plVar5;
  long in_FS_OFFSET;
  long local_58;
  ulong local_50;
  long local_40;
  
  uVar4 = CONCAT44(in_register_0000003c,__nfds);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (__timeout == (timeval *)0x0) {
    plVar5 = (long *)0x0;
  }
  else {
    lVar1 = __timeout->tv_sec;
    if ((lVar1 < 0) || (iVar3 = (int)__timeout->tv_usec, iVar3 < 0)) {
      iVar3 = -1;
      *(undefined4 *)(in_FS_OFFSET + -0x58) = 0x16;
      goto LAB_00765472;
    }
    uVar4 = 999999999;
    local_58 = 0x7fffffffffffffff;
    if ((long)(iVar3 / 1000000) <= 0x7fffffffffffffff - lVar1) {
      local_58 = iVar3 / 1000000 + lVar1;
      uVar4 = (ulong)(uint)((iVar3 % 1000000) * 1000);
    }
    plVar5 = &local_58;
    local_50 = uVar4;
  }
  if (*(int *)(in_FS_OFFSET + 0x18) == 0) {
    syscall();
  }
  else {
    uVar2 = __pthread_enable_asynccancel(uVar4);
    syscall();
    __pthread_disable_asynccancel(uVar2,__readfds,__writefds);
  }
  iVar3 = 0x10e;
  if (__timeout != (timeval *)0x0) {
    lVar1 = plVar5[1];
    __timeout->tv_sec = *plVar5;
    __timeout->tv_usec = lVar1 / 1000;
  }
LAB_00765472:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return iVar3;
}

