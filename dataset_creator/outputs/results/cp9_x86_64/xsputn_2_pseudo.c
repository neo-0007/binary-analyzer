
/* std::__basic_file<char>::xsputn_2(char const*, long, char const*, long) */

long __thiscall
std::__basic_file<char>::xsputn_2
          (__basic_file<char> *this,char *param_1,long param_2,char *param_3,long param_4)

{
  int __fd;
  ssize_t sVar1;
  int *piVar2;
  long lVar3;
  long lVar4;
  size_t __n;
  char *__buf;
  long lVar5;
  size_t sVar6;
  long in_FS_OFFSET;
  iovec local_68;
  char *local_58;
  long local_50;
  long local_40;
  
  lVar5 = param_2 + param_4;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  __fd = fd(this);
  lVar4 = lVar5;
  local_58 = param_3;
  local_50 = param_4;
  do {
    while( true ) {
      local_68.iov_base = param_1;
      local_68.iov_len = param_2;
      sVar1 = writev(__fd,&local_68,2);
      if (sVar1 == -1) break;
      lVar4 = lVar4 - sVar1;
      if (lVar4 == 0) goto LAB_006ae400;
      lVar3 = sVar1 - param_2;
      if (-1 < lVar3) {
        sVar6 = param_4 - lVar3;
        __buf = param_3 + lVar3;
        __n = sVar6;
        goto LAB_006ae448;
      }
      param_1 = param_1 + sVar1;
      param_2 = param_2 - sVar1;
    }
    piVar2 = __errno_location();
  } while (*piVar2 == 4);
  lVar5 = lVar5 - lVar4;
  goto LAB_006ae400;
  while( true ) {
    piVar2 = __errno_location();
    if (*piVar2 != 4) break;
LAB_006ae448:
    sVar1 = write(__fd,__buf,__n);
    if (sVar1 != -1) {
      __n = __n - sVar1;
      if (__n == 0) goto LAB_006ae469;
      __buf = __buf + sVar1;
      goto LAB_006ae448;
    }
  }
  sVar6 = sVar6 - __n;
LAB_006ae469:
  lVar5 = lVar5 - (lVar4 - sVar6);
LAB_006ae400:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

