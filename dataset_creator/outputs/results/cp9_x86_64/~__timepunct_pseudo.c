
/* std::__timepunct<wchar_t>::~__timepunct() */

void __thiscall std::__timepunct<wchar_t>::~__timepunct(__timepunct<wchar_t> *this)

{
  ~__timepunct(this);
  operator_delete(this);
  return;
}

