
/* std::__cxx11::wstring::at(unsigned long) */

long __thiscall std::__cxx11::wstring::at(wstring *this,ulong param_1)

{
  if (param_1 < *(ulong *)(this + 8)) {
    return *(long *)this + param_1 * 4;
  }
                    /* WARNING: Subroutine does not return */
  __throw_out_of_range_fmt("basic_string::at: __n (which is %zu) >= this->size() (which is %zu)");
}

