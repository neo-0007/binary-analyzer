
int profil(ushort *__sample_buffer,size_t __size,size_t __offset,uint __scale)

{
  int iVar1;
  long in_FS_OFFSET;
  itimerval local_e8;
  sigaction local_c8;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (__sample_buffer == (ushort *)0x0) {
    if (samples != (ushort *)0x0) {
      iVar1 = setitimer(ITIMER_PROF,(itimerval *)otimer_0,(itimerval *)0x0);
      if (-1 < iVar1) {
        samples = (ushort *)0x0;
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
          iVar1 = sigaction(0x1b,(sigaction *)oact_1,(sigaction *)0x0);
          return iVar1;
        }
        goto LAB_007b6efa;
      }
      goto LAB_007b6ef0;
    }
    iVar1 = 0;
  }
  else {
    if ((samples == (ushort *)0x0) ||
       ((iVar1 = setitimer(ITIMER_PROF,(itimerval *)otimer_0,(itimerval *)0x0), -1 < iVar1 &&
        (iVar1 = sigaction(0x1b,(sigaction *)oact_1,(sigaction *)0x0), -1 < iVar1)))) {
      nsamples = __size >> 1;
      local_c8.__sigaction_handler.sa_handler = __profil_counter;
      local_c8.sa_flags = 0x10000004;
      local_c8.sa_mask.__val[0] = 0xffffffffffffffff;
      pc_scale = __scale;
      pc_offset = __offset;
      samples = __sample_buffer;
      iVar1 = sigaction(0x1b,&local_c8,(sigaction *)oact_1);
      if (-1 < iVar1) {
        local_e8.it_value.tv_sec = 0;
        iVar1 = __profile_frequency();
        local_e8.it_interval.tv_usec = (__suseconds_t)(int)(1000000 / (long)iVar1);
        local_e8.it_interval.tv_sec = local_e8.it_value.tv_sec;
        local_e8.it_value.tv_usec = local_e8.it_interval.tv_usec;
        iVar1 = setitimer(ITIMER_PROF,&local_e8,(itimerval *)otimer_0);
        goto LAB_007b6e4d;
      }
    }
LAB_007b6ef0:
    iVar1 = -1;
  }
LAB_007b6e4d:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
LAB_007b6efa:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

