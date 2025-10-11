
/* std::__cxx11::wstring::pop_back() */

void __thiscall std::__cxx11::wstring::pop_back(wstring *this)

{
  _M_erase(this,*(long *)(this + 8) - 1,1);
  return;
}

