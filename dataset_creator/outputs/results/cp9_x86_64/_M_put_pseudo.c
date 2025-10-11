
/* std::__timepunct<wchar_t>::_M_put(wchar_t*, unsigned long, wchar_t const*, tm const*) const */

void __thiscall
std::__timepunct<wchar_t>::_M_put
          (__timepunct<wchar_t> *this,wchar_t *param_1,ulong param_2,wchar_t *param_3,tm *param_4)

{
  size_t sVar1;
  
  sVar1 = wcsftime_l(param_1,param_2,param_3,param_4,*(__locale_t *)(this + 0x18));
  if (sVar1 == 0) {
    *param_1 = L'\0';
  }
  return;
}

