
/* std::__cxx11::wstring::_M_set_length(unsigned long) */

void __thiscall std::__cxx11::wstring::_M_set_length(wstring *this,ulong param_1)

{
  *(ulong *)(this + 8) = param_1;
  *(undefined4 *)(*(long *)this + param_1 * 4) = 0;
  return;
}

