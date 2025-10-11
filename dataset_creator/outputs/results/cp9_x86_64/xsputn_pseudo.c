
/* std::__basic_file<char>::xsputn(char const*, long) */

long __thiscall std::__basic_file<char>::xsputn(__basic_file<char> *this,char *param_1,long param_2)

{
  int __fd;
  ssize_t sVar1;
  int *piVar2;
  size_t __n;
  
  __fd = fd(this);
  __n = param_2;
  while( true ) {
    while (sVar1 = write(__fd,param_1,__n), sVar1 == -1) {
      piVar2 = __errno_location();
      if (*piVar2 != 4) {
        return param_2 - __n;
      }
    }
    __n = __n - sVar1;
    if (__n == 0) break;
    param_1 = param_1 + sVar1;
  }
  return param_2;
}

