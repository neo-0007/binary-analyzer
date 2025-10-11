
/* std::__cxx11::wstring::capacity() const */

undefined8 __thiscall std::__cxx11::wstring::capacity(wstring *this)

{
  if (*(wstring **)this != this + 0x10) {
    return *(undefined8 *)(this + 0x10);
  }
  return 3;
}

