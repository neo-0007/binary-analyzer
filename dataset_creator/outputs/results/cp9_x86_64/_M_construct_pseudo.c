
/* std::__cxx11::wstring::_M_construct(unsigned long, wchar_t) */

void __thiscall std::__cxx11::wstring::_M_construct(wstring *this,ulong param_1,wchar_t param_2)

{
  wchar_t *pwVar1;
  ulong local_20 [2];
  
  local_20[0] = param_1;
  if (param_1 < 4) {
    pwVar1 = *(wchar_t **)this;
  }
  else {
    pwVar1 = (wchar_t *)_M_create(this,local_20,0);
    *(wchar_t **)this = pwVar1;
    *(ulong *)(this + 0x10) = local_20[0];
  }
  if (local_20[0] != 0) {
    if (local_20[0] == 1) {
      *pwVar1 = param_2;
    }
    else {
      __wmemset_chk(pwVar1,param_2,local_20[0],0x3fffffffffffffff);
      pwVar1 = *(wchar_t **)this;
    }
  }
  *(ulong *)(this + 8) = local_20[0];
  pwVar1[local_20[0]] = L'\0';
  return;
}

