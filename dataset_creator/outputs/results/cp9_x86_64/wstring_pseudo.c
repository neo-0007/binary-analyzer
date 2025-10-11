
/* std::__cxx11::wstring::wstring(wchar_t const*, std::allocator<wchar_t> const&) */

void __thiscall std::__cxx11::wstring::wstring(wstring *this,wchar_t *param_1,allocator *param_2)

{
  size_t sVar1;
  wchar_t *pwVar2;
  
  pwVar2 = (wchar_t *)0x4;
  *(wstring **)this = this + 0x10;
  if (param_1 != (wchar_t *)0x0) {
    sVar1 = wcslen(param_1);
    pwVar2 = param_1 + sVar1;
  }
  _M_construct<wchar_t_const*>(this,param_1,pwVar2);
  return;
}

