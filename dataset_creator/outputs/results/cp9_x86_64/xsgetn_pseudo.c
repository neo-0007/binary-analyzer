
/* std::__basic_file<char>::xsgetn(char*, long) */

ssize_t __thiscall
std::__basic_file<char>::xsgetn(__basic_file<char> *this,char *param_1,long param_2)

{
  int __fd;
  int *piVar1;
  ssize_t sVar2;
  
  do {
    __fd = fd(this);
    sVar2 = read(__fd,param_1,param_2);
    if (sVar2 != -1) {
      return sVar2;
    }
    piVar1 = __errno_location();
  } while (*piVar1 == 4);
  return -1;
}

