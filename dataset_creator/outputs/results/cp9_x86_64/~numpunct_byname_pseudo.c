
/* std::numpunct_byname<wchar_t>::~numpunct_byname() */

void __thiscall std::numpunct_byname<wchar_t>::~numpunct_byname(numpunct_byname<wchar_t> *this)

{
  *(undefined ***)this = &PTR__numpunct_byname_0092b9c8;
  numpunct<wchar_t>::~numpunct((numpunct<wchar_t> *)this);
  operator_delete(this);
  return;
}

