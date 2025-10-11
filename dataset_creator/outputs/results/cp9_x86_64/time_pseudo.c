
time_t time(time_t *__timer)

{
  ulong uVar1;
  long in_FS_OFFSET;
  
  if (_dl_vdso_time != (code *)0x0) {
    uVar1 = (*_dl_vdso_time)();
    if (uVar1 < 0xfffffffffffff001) {
      return uVar1;
    }
    if (uVar1 != 0xffffffffffffffda) {
      *(int *)(in_FS_OFFSET + -0x58) = -(int)uVar1;
      return -1;
    }
  }
  syscall();
  return 0xc9;
}

