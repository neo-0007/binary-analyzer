
/* std::__cxx11::wstring::find(wchar_t, unsigned long) const */

long __thiscall std::__cxx11::wstring::find(wstring *this,wchar_t param_1,ulong param_2)

{
  long lVar1;
  wchar_t *pwVar2;
  long lVar3;
  
  lVar3 = -1;
  if (param_2 < *(ulong *)(this + 8)) {
    lVar1 = *(long *)this;
    pwVar2 = wmemchr((wchar_t *)(lVar1 + param_2 * 4),param_1,*(ulong *)(this + 8) - param_2);
    if (pwVar2 != (wchar_t *)0x0) {
      lVar3 = (long)pwVar2 - lVar1 >> 2;
    }
  }
  return lVar3;
}

