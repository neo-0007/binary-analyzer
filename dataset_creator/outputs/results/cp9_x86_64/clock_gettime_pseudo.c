
/* WARNING: Removing unreachable block (ram,0x0075e5e8) */
/* WARNING: Removing unreachable block (ram,0x0075e5e0) */

int clock_gettime(clockid_t __clock_id,timespec *__tp)

{
  int iVar1;
  long in_FS_OFFSET;
  
  if (_dl_vdso_clock_gettime64 == (code *)0x0) {
    syscall();
    *(undefined4 *)(in_FS_OFFSET + -0x58) = 0xffffff1c;
    return -1;
  }
  iVar1 = (*_dl_vdso_clock_gettime64)();
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    *(int *)(in_FS_OFFSET + -0x58) = -iVar1;
    iVar1 = -1;
  }
  return iVar1;
}

