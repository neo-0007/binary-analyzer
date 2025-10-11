
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::wostream& std::ends<wchar_t, std::char_traits<wchar_t> >(std::wostream&) */

wostream * std::ends<wchar_t,std::char_traits<wchar_t>>(wostream *param_1)

{
  wostream *pwVar1;
  
  pwVar1 = (wostream *)wostream::put(param_1,L'\0');
  return pwVar1;
}

