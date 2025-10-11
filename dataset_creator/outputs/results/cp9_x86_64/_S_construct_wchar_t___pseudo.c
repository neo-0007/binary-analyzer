
/* wchar_t* std::wstring::_S_construct<wchar_t*>(wchar_t*, wchar_t*, std::allocator<wchar_t> const&,
   std::forward_iterator_tag) */

wchar_t * std::wstring::_S_construct<wchar_t*>(long param_1,long param_2)

{
  wchar_t *pwVar1;
  
  if (param_1 == param_2) {
    return (wchar_t *)&DAT_00938298;
  }
  if (param_1 != 0) {
    pwVar1 = _S_construct<wchar_t_const*>();
    return pwVar1;
  }
                    /* WARNING: Subroutine does not return */
  __throw_logic_error("basic_string::_S_construct null not valid");
}

