
/* std::__cxx11::wstring::rfind(wchar_t, unsigned long) const */

ulong __thiscall std::__cxx11::wstring::rfind(wstring *this,wchar_t param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  bool bVar3;
  
  uVar1 = 0xffffffffffffffff;
  if (*(long *)(this + 8) != 0) {
    uVar2 = *(long *)(this + 8) - 1;
    uVar1 = param_2;
    if (uVar2 <= param_2) {
      uVar1 = uVar2;
    }
    do {
      if (*(wchar_t *)(*(long *)this + uVar1 * 4) == param_1) {
        return uVar1;
      }
      bVar3 = uVar1 != 0;
      uVar1 = uVar1 - 1;
    } while (bVar3);
  }
  return uVar1;
}

