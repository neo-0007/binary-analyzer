
/* std::__cxx11::wstring::find_first_not_of(wchar_t, unsigned long) const */

ulong __thiscall
std::__cxx11::wstring::find_first_not_of(wstring *this,wchar_t param_1,ulong param_2)

{
  if (param_2 < *(ulong *)(this + 8)) {
    do {
      if (*(wchar_t *)(*(long *)this + param_2 * 4) != param_1) {
        return param_2;
      }
      param_2 = param_2 + 1;
    } while (param_2 != *(ulong *)(this + 8));
  }
  return 0xffffffffffffffff;
}

