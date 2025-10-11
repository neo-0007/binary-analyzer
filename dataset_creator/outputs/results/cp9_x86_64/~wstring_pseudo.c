
/* std::__cxx11::wstring::~wstring() */

void __thiscall std::__cxx11::wstring::~wstring(wstring *this)

{
  if (*(wstring **)this != this + 0x10) {
    operator_delete(*(wstring **)this);
    return;
  }
  return;
}

