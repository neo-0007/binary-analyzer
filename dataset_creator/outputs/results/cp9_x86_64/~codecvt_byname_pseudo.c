
/* std::codecvt_byname<wchar_t, char, __mbstate_t>::~codecvt_byname() */

void __thiscall
std::codecvt_byname<wchar_t,char,__mbstate_t>::~codecvt_byname
          (codecvt_byname<wchar_t,char,__mbstate_t> *this)

{
  *(undefined ***)this = &PTR__codecvt_byname_0092bc88;
  codecvt<wchar_t,char,__mbstate_t>::~codecvt((codecvt<wchar_t,char,__mbstate_t> *)this);
  operator_delete(this);
  return;
}

