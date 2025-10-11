
/* std::__cxx11::wstring::find_last_not_of(wchar_t, unsigned long) const */

ulong __thiscall
std::__cxx11::wstring::find_last_not_of(wstring *this,wchar_t param_1,ulong param_2)

{
  ulong uVar1;
  bool bVar2;
  
  uVar1 = 0xffffffffffffffff;
  if (*(long *)(this + 8) != 0) {
    uVar1 = *(long *)(this + 8) - 1;
    if (uVar1 <= param_2) {
      param_2 = uVar1;
    }
    do {
      if (*(wchar_t *)(*(long *)this + param_2 * 4) != param_1) {
        return param_2;
      }
      bVar2 = param_2 != 0;
      uVar1 = param_2 - 1;
      param_2 = uVar1;
    } while (bVar2);
  }
  return uVar1;
}

