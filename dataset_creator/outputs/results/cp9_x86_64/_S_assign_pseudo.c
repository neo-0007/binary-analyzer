
/* std::__cxx11::wstring::_S_assign(wchar_t*, unsigned long, wchar_t) */

void std::__cxx11::wstring::_S_assign(wchar_t *param_1,ulong param_2,wchar_t param_3)

{
  if (param_2 == 1) {
    *param_1 = param_3;
    return;
  }
  if (param_2 != 0) {
    __wmemset_chk(param_1,param_3,param_2,0x3fffffffffffffff);
    return;
  }
  return;
}

