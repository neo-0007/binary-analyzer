
/* std::wstring::wstring<__gnu_cxx::__normal_iterator<wchar_t*, std::wstring >
   >(__gnu_cxx::__normal_iterator<wchar_t*, std::wstring >, __gnu_cxx::__normal_iterator<wchar_t*,
   std::wstring >, std::allocator<wchar_t> const&) */

void __thiscall
std::wstring::wstring<__gnu_cxx::__normal_iterator<wchar_t*,std::wstring>>
          (wstring *this,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  wchar_t *pwVar1;
  
  pwVar1 = _S_construct<__gnu_cxx::__normal_iterator<wchar_t*,std::wstring>>
                     (param_2,param_3,param_4);
  *(wchar_t **)this = pwVar1;
  return;
}

