
int BIO_socket_wait(uint param_1,int param_2,long param_3)

{
  fd_set *__writefds;
  int iVar1;
  time_t tVar2;
  long lVar3;
  fd_set *pfVar4;
  long in_FS_OFFSET;
  byte bVar5;
  timeval local_d8;
  fd_set local_c8;
  long local_40;
  
  bVar5 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 < 0x400) {
    iVar1 = 1;
    if (param_3 != 0) {
      tVar2 = time((time_t *)0x0);
      iVar1 = 0;
      if (tVar2 < param_3) {
        __writefds = &local_c8;
        local_d8.tv_sec = param_3 - tVar2;
        pfVar4 = __writefds;
        for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
          pfVar4->fds_bits[0] = 0;
          pfVar4 = (fd_set *)((long)pfVar4 + ((ulong)bVar5 * -2 + 1) * 8);
        }
        lVar3 = __fdelt_warn((long)(int)param_1);
        local_d8.tv_usec = 0;
        local_c8.fds_bits[lVar3] = local_c8.fds_bits[lVar3] | 1L << ((byte)param_1 & 0x3f);
        pfVar4 = (fd_set *)0x0;
        if (param_2 != 0) {
          pfVar4 = __writefds;
          __writefds = (fd_set *)0x0;
        }
        iVar1 = select(param_1 + 1,pfVar4,__writefds,(fd_set *)0x0,&local_d8);
      }
    }
  }
  else {
    iVar1 = -1;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

