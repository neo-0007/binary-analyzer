
/* std::__cxx11::wstring::wstring<wchar_t*, void>(wchar_t*, wchar_t*, std::allocator<wchar_t>
   const&) */

void __thiscall
std::__cxx11::wstring::wstring<wchar_t*,void>
          (wstring *this,wchar_t *param_1,wchar_t *param_2,allocator *param_3)

{
  *(wstring **)this = this + 0x10;
  _M_construct<wchar_t*>();
  return;
}

