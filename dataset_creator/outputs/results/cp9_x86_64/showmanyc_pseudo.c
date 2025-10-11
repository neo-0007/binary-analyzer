
/* std::__basic_file<char>::showmanyc() */

long __thiscall std::__basic_file<char>::showmanyc(__basic_file<char> *this)

{
  int iVar1;
  long lVar2;
  __off64_t _Var3;
  long in_FS_OFFSET;
  int local_c4;
  pollfd local_c0;
  stat local_b8;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_c4 = 0;
  iVar1 = fd(this);
  iVar1 = ioctl(iVar1,0x541b,&local_c4);
  if ((iVar1 != 0) || (lVar2 = (long)local_c4, local_c4 < 0)) {
    local_c0.fd = fd(this);
    local_c0.events = 1;
    iVar1 = poll(&local_c0,1,0);
    if (0 < iVar1) {
      iVar1 = fd(this);
      iVar1 = fstat(iVar1,&local_b8);
      if ((iVar1 == 0) && ((local_b8.st_mode & 0xf000) == 0x8000)) {
        iVar1 = fd(this);
        _Var3 = lseek64(iVar1,0,1);
        lVar2 = local_b8.st_size - _Var3;
        goto LAB_006ae565;
      }
    }
    lVar2 = 0;
  }
LAB_006ae565:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

