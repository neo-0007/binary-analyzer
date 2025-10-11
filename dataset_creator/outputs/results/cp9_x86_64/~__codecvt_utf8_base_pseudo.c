
/* std::__codecvt_utf8_base<wchar_t>::~__codecvt_utf8_base() */

void __thiscall
std::__codecvt_utf8_base<wchar_t>::~__codecvt_utf8_base(__codecvt_utf8_base<wchar_t> *this)

{
  ~__codecvt_utf8_base(this);
  operator_delete(this);
  return;
}

