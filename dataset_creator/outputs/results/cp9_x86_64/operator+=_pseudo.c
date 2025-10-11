
/* std::__cxx11::wstring::TEMPNAMEPLACEHOLDERVALUE(std::initializer_list<wchar_t>) */

void __thiscall std::__cxx11::wstring::operator+=(wstring *this,wchar_t *param_2,ulong param_3)

{
  if (param_3 <= 0xfffffffffffffffU - *(long *)(this + 8)) {
    _M_append(this,param_2,param_3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __throw_length_error("basic_string::append");
}

