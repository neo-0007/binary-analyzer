
/* std::__cxx11::wstring::_S_copy(wchar_t*, wchar_t const*, unsigned long) */

void std::__cxx11::wstring::_S_copy(wchar_t *param_1,wchar_t *param_2,ulong param_3)

{
  if (param_3 == 1) {
    *param_1 = *param_2;
    return;
  }
  if (param_3 != 0) {
    __wmemcpy_chk();
    return;
  }
  return;
}

