
/* std::wstring::_M_replace_safe(unsigned long, unsigned long, wchar_t const*, unsigned long) */

wstring * __thiscall
std::wstring::_M_replace_safe
          (wstring *this,ulong param_1,ulong param_2,wchar_t *param_3,ulong param_4)

{
  wchar_t *pwVar1;
  
  _M_mutate(this,param_1,param_2,param_4);
  if (param_4 != 0) {
    pwVar1 = (wchar_t *)(*(long *)this + param_1 * 4);
    if (param_4 != 1) {
      __wmemcpy_chk(pwVar1,param_3,param_4,0x3fffffffffffffff);
      return this;
    }
    *pwVar1 = *param_3;
  }
  return this;
}

