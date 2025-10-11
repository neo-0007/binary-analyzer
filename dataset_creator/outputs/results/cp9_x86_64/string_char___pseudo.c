
/* std::string::string<char*>(char*, char*, std::allocator<char> const&) */

void __thiscall
std::string::string<char*>(string *this,char *param_1,char *param_2,allocator *param_3)

{
  char *pcVar1;
  
  pcVar1 = _S_construct<char*>(param_1,param_2,param_3);
  *(char **)this = pcVar1;
  return;
}

