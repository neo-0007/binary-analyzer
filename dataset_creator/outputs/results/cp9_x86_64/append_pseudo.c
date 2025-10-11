
/* std::__cxx11::wstring::append(std::initializer_list<wchar_t>) */

void std::__cxx11::wstring::append(wstring *param_1,wchar_t *param_2,ulong param_3)

{
  if (param_3 <= 0xfffffffffffffffU - *(long *)(param_1 + 8)) {
    _M_append(param_1,param_2,param_3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __throw_length_error("basic_string::append");
}

