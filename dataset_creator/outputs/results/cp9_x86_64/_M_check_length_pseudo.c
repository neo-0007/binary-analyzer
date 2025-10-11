
/* std::__cxx11::wstring::_M_check_length(unsigned long, unsigned long, char const*) const */

void __thiscall
std::__cxx11::wstring::_M_check_length(wstring *this,ulong param_1,ulong param_2,char *param_3)

{
  if (param_2 <= (param_1 + 0xfffffffffffffff) - *(long *)(this + 8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __throw_length_error(param_3);
}

