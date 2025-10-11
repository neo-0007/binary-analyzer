
/* std::__cxx11::wstring::_S_copy_chars(wchar_t*, wchar_t const*, wchar_t const*) */

void std::__cxx11::wstring::_S_copy_chars(wchar_t *param_1,wchar_t *param_2,wchar_t *param_3)

{
  long lVar1;
  
  lVar1 = (long)param_3 - (long)param_2 >> 2;
  if (lVar1 == 1) {
    *param_1 = *param_2;
    return;
  }
  if (lVar1 != 0) {
    __wmemcpy_chk();
    return;
  }
  return;
}

