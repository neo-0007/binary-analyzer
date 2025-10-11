
/* void std::__cxx11::wstring::insert<__gnu_cxx::__normal_iterator<wchar_t*, std::__cxx11::wstring >
   >(__gnu_cxx::__normal_iterator<wchar_t*, std::__cxx11::wstring >,
   __gnu_cxx::__normal_iterator<wchar_t*, std::__cxx11::wstring >,
   __gnu_cxx::__normal_iterator<wchar_t*, std::__cxx11::wstring >) */

void __thiscall
std::__cxx11::wstring::insert<__gnu_cxx::__normal_iterator<wchar_t*,std::__cxx11::wstring>>
          (wstring *this,long param_2,wchar_t *param_3,long param_4)

{
  ulong uVar1;
  
  uVar1 = param_2 - *(long *)this >> 2;
  if (uVar1 <= *(ulong *)(this + 8)) {
    _M_replace(this,uVar1,0,param_3,param_4 - (long)param_3 >> 2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __throw_out_of_range_fmt
            ("%s: __pos (which is %zu) > this->size() (which is %zu)","basic_string::replace",uVar1)
  ;
}

