
/* std::moneypunct_byname<wchar_t, true>::~moneypunct_byname() */

void __thiscall
std::moneypunct_byname<wchar_t,true>::~moneypunct_byname(moneypunct_byname<wchar_t,true> *this)

{
  *(undefined ***)this = &PTR__moneypunct_byname_0092bd48;
  moneypunct<wchar_t,true>::~moneypunct((moneypunct<wchar_t,true> *)this);
  operator_delete(this);
  return;
}

