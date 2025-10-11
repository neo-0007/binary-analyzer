
/* std::__cxx11::wstring::_M_disjunct(wchar_t const*) const */

undefined8 __thiscall std::__cxx11::wstring::_M_disjunct(wstring *this,wchar_t *param_1)

{
  wchar_t *pwVar1;
  undefined8 uVar2;
  
  uVar2 = 1;
  if (*(wchar_t **)this <= param_1) {
    pwVar1 = *(wchar_t **)this + *(long *)(this + 8);
    uVar2 = CONCAT71((int7)((ulong)pwVar1 >> 8),pwVar1 < param_1);
  }
  return uVar2;
}

