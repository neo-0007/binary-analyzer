
/* std::__cxx11::string::string(char const*, std::allocator<char> const&) */

void __thiscall std::__cxx11::string::string(string *this,char *param_1,allocator *param_2)

{
  size_t sVar1;
  char *pcVar2;
  
  pcVar2 = (char *)0x1;
  *(string **)this = this + 0x10;
  if (param_1 != (char *)0x0) {
    sVar1 = strlen(param_1);
    pcVar2 = param_1 + sVar1;
  }
  _M_construct<char_const*>(this,param_1,pcVar2);
  return;
}

