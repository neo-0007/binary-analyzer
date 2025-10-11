
/* std::__cxx11::wstring::_M_check(unsigned long, char const*) const */

void __thiscall std::__cxx11::wstring::_M_check(wstring *this,ulong param_1,char *param_2)

{
  if (param_1 <= *(ulong *)(this + 8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __throw_out_of_range_fmt("%s: __pos (which is %zu) > this->size() (which is %zu)",param_2,param_1)
  ;
}

