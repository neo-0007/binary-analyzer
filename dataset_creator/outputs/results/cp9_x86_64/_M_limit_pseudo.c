
/* std::__cxx11::wstring::_M_limit(unsigned long, unsigned long) const */

ulong __thiscall std::__cxx11::wstring::_M_limit(wstring *this,ulong param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = *(long *)(this + 8) - param_1;
  if (param_2 < *(long *)(this + 8) - param_1) {
    uVar1 = param_2;
  }
  return uVar1;
}

