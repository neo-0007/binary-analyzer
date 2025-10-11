
/* std::wstring::wstring<wchar_t const*>(wchar_t const*, wchar_t const*, std::allocator<wchar_t>
   const&) */

void __thiscall
std::wstring::wstring<wchar_t_const*>
          (wstring *this,wchar_t *param_1,wchar_t *param_2,allocator *param_3)

{
  wchar_t *pwVar1;
  
  pwVar1 = _S_construct<wchar_t_const*>(param_1,param_2,param_3);
  *(wchar_t **)this = pwVar1;
  return;
}

