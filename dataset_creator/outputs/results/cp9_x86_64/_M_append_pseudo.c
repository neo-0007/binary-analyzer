
/* std::__cxx11::wstring::_M_append(wchar_t const*, unsigned long) */

wstring * __thiscall std::__cxx11::wstring::_M_append(wstring *this,wchar_t *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  wstring *pwVar3;
  ulong uVar4;
  
  uVar2 = *(ulong *)(this + 8);
  pwVar3 = *(wstring **)this;
  uVar1 = uVar2 + param_2;
  if (pwVar3 == this + 0x10) {
    uVar4 = 3;
  }
  else {
    uVar4 = *(ulong *)(this + 0x10);
  }
  if (uVar4 < uVar1) {
    _M_mutate(this,uVar2,0,param_1,param_2);
    pwVar3 = *(wstring **)this;
  }
  else if (param_2 != 0) {
    if (param_2 == 1) {
      *(wchar_t *)(pwVar3 + uVar2 * 4) = *param_1;
    }
    else {
      __wmemcpy_chk(pwVar3 + uVar2 * 4,param_1,param_2,0x3fffffffffffffff);
      pwVar3 = *(wstring **)this;
    }
  }
  *(ulong *)(this + 8) = uVar1;
  *(undefined4 *)(pwVar3 + uVar1 * 4) = 0;
  return this;
}

