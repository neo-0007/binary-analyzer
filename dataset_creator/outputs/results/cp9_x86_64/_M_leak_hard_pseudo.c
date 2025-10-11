
/* std::wstring::_M_leak_hard() */

void __thiscall std::wstring::_M_leak_hard(wstring *this)

{
  if (*(undefined **)this == &DAT_00938298) {
    return;
  }
  if (*(int *)(*(undefined **)this + -8) < 1) {
    *(undefined4 *)(*(long *)this + -8) = 0xffffffff;
    return;
  }
  _M_mutate(this,0,0,0);
  *(undefined4 *)(*(long *)this + -8) = 0xffffffff;
  return;
}

