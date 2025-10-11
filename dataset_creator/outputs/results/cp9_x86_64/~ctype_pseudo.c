
/* std::ctype<wchar_t>::~ctype() */

void __thiscall std::ctype<wchar_t>::~ctype(ctype<wchar_t> *this)

{
  ~ctype(this);
  operator_delete(this);
  return;
}

