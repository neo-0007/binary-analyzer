
/* std::ctype<wchar_t>::do_toupper(wchar_t*, wchar_t const*) const */

wchar_t * __thiscall
std::ctype<wchar_t>::do_toupper(ctype<wchar_t> *this,wchar_t *param_1,wchar_t *param_2)

{
  wchar_t wVar1;
  wchar_t *pwVar2;
  
  if (param_1 < param_2) {
    do {
      pwVar2 = param_1 + 1;
      wVar1 = towupper_l(*param_1,*(__locale_t *)(this + 0x10));
      *param_1 = wVar1;
      param_1 = pwVar2;
    } while (pwVar2 < param_2);
  }
  return param_2;
}

