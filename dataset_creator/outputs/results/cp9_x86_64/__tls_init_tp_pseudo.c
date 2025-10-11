
void __tls_init_tp(void)

{
  long lVar1;
  long *in_FS_OFFSET;
  int local_c;
  
  lVar1 = in_FS_OFFSET[2];
  *(long *)(lVar1 + 0x2c0) = _dl_stack_user;
  *(long **)(lVar1 + 0x2c8) = &_dl_stack_user;
  *(long *)(_dl_stack_user + 8) = lVar1 + 0x2c0;
  syscall();
  _dl_stack_user = lVar1 + 0x2c0;
  *(undefined4 *)(lVar1 + 0x2d0) = 0xda;
  in_FS_OFFSET[0xa2] = lVar1 + 0x310;
  *(undefined1 *)((long)in_FS_OFFSET + 0x612) = 1;
  *(undefined1 *)((long)in_FS_OFFSET + 0x611) = __nptl_initial_report_events;
  *(undefined8 *)(lVar1 + 0x2e8) = 0xffffffffffffffe0;
  *(long *)(lVar1 + 0x2d8) = lVar1 + 0x2e0;
  *(long *)(lVar1 + 0x2e0) = lVar1 + 0x2e0;
  syscall();
  __tunable_get_val(5,&local_c,0);
  if (local_c == 0) {
    *(undefined4 *)((long)in_FS_OFFSET + 0x9a4) = 0xfffffffe;
  }
  else {
    syscall();
    __rseq_size = 0x20;
  }
  __rseq_offset = (lVar1 + 0x9a0) - *in_FS_OFFSET;
  in_FS_OFFSET[0xd3] = __libc_stack_end;
  *(undefined1 *)((long)in_FS_OFFSET + 0x971) = 0;
  *(undefined1 *)((long)in_FS_OFFSET + 0x972) = 0;
  return;
}

