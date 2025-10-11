
/* std::__cxx11::wstring::_M_dispose() */

void __thiscall std::__cxx11::wstring::_M_dispose(wstring *this)

{
  if (*(wstring **)this != this + 0x10) {
    operator_delete(*(wstring **)this);
    return;
  }
  return;
}

