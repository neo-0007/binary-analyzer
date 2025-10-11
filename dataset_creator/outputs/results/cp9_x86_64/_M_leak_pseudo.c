
/* std::wstring::_M_leak() */

void __thiscall std::wstring::_M_leak(wstring *this)

{
  if (*(int *)(*(long *)this + -8) < 0) {
    return;
  }
  _M_leak_hard(this);
  return;
}

