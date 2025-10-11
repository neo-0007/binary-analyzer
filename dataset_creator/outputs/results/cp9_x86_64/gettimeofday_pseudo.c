
int gettimeofday(timeval *__tv,__timezone_ptr_t __tz)

{
  uint uVar1;
  long in_FS_OFFSET;
  
  if (__tz != (__timezone_ptr_t)0x0) {
    *(undefined1 *)&__tz->tz_minuteswest = 0;
  }
  if (_dl_vdso_gettimeofday != (code *)0x0) {
    uVar1 = (*_dl_vdso_gettimeofday)(__tv,__tz);
    if (0xfffff000 < uVar1) {
      if (uVar1 == 0xffffffda) goto LAB_00756e58;
      *(uint *)(in_FS_OFFSET + -0x58) = -uVar1;
      uVar1 = 0xffffffff;
    }
    return uVar1;
  }
LAB_00756e58:
  syscall();
  return 0x60;
}

