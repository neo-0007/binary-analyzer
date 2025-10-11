
/* std::__cxx11::wstring::assign(wchar_t const*) */

void __thiscall std::__cxx11::wstring::assign(wstring *this,wchar_t *param_1)

{
  size_t sVar1;
  
  sVar1 = wcslen(param_1);
  _M_replace(this,0,*(ulong *)(this + 8),param_1,sVar1);
  return;
}

