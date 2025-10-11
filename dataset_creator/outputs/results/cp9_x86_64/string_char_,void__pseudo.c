
/* std::__cxx11::string::string<char*, void>(char*, char*, std::allocator<char> const&) */

void __thiscall
std::__cxx11::string::string<char*,void>
          (string *this,char *param_1,char *param_2,allocator *param_3)

{
  *(string **)this = this + 0x10;
  _M_construct<char*>();
  return;
}

