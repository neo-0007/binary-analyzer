
/* std::__basic_file<char>::sys_open(int, std::_Ios_Openmode) */

__basic_file<char> * __thiscall
std::__basic_file<char>::sys_open(__basic_file<char> *this,int param_1,undefined4 param_3)

{
  char cVar1;
  char *__modes;
  FILE *__stream;
  
  __modes = (char *)::(anonymous_namespace)::fopen_mode(param_3);
  if ((__modes != (char *)0x0) && (cVar1 = is_open(this), cVar1 == '\0')) {
    __stream = fdopen(param_1,__modes);
    *(FILE **)this = __stream;
    if (__stream != (FILE *)0x0) {
      this[8] = (__basic_file<char>)0x1;
      if (param_1 != 0) {
        return this;
      }
      setvbuf(__stream,(char *)0x0,2,0);
      return this;
    }
  }
  return (__basic_file<char> *)0x0;
}

