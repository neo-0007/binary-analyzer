
/* std::__cxx11::wstring::insert(__gnu_cxx::__normal_iterator<wchar_t*, std::__cxx11::wstring >,
   wchar_t) */

long __thiscall std::__cxx11::wstring::insert(wstring *this,long param_2,wchar_t param_3)

{
  long lVar1;
  
  lVar1 = *(long *)this;
  _M_replace_aux(this,param_2 - lVar1 >> 2,0,1,param_3);
  return *(long *)this + (param_2 - lVar1);
}

