
void __libc_start_call_main(code *param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  long in_FS_OFFSET;
  ulong local_30;
  ulong local_28;
  
  iVar1 = _setjmp((__jmp_buf_tag *)&stack0xffffffffffffff88);
  if (iVar1 == 0) {
    local_30 = *(ulong *)(in_FS_OFFSET + 0x300);
    local_28 = *(ulong *)(in_FS_OFFSET + 0x2f8);
    *(undefined1 **)(in_FS_OFFSET + 0x300) = &stack0xffffffffffffff88;
    iVar1 = (*param_1)(param_2,param_3,environ);
  }
  else {
    __nptl_deallocate_tsd();
    LOCK();
    __nptl_nthreads = __nptl_nthreads + -1;
    UNLOCK();
    if (__nptl_nthreads != 0) {
      do {
        syscall();
      } while( true );
    }
    iVar1 = 0;
  }
                    /* WARNING: Subroutine does not return */
  exit(iVar1);
}

