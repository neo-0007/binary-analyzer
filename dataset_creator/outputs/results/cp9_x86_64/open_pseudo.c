
/* std::__basic_file<char>::open(char const*, std::_Ios_Openmode, int) */

__basic_file<char> *
std::__basic_file<char>::open(__basic_file<char> *param_1,char *param_2,undefined4 param_3)

{
  char cVar1;
  char *__modes;
  FILE *pFVar2;
  
  __modes = (char *)::(anonymous_namespace)::fopen_mode(param_3);
  if (__modes != (char *)0x0) {
    cVar1 = is_open(param_1);
    if (cVar1 == '\0') {
      pFVar2 = fopen(param_2,__modes);
      *(FILE **)param_1 = pFVar2;
      if (pFVar2 != (FILE *)0x0) {
        param_1[8] = (__basic_file<char>)0x1;
        return param_1;
      }
    }
  }
  return (__basic_file<char> *)0x0;
}

