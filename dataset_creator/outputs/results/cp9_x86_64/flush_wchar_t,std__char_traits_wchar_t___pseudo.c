
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::wostream& std::flush<wchar_t, std::char_traits<wchar_t> >(std::wostream&) */

wostream * std::flush<wchar_t,std::char_traits<wchar_t>>(wostream *param_1)

{
  wostream *pwVar1;
  
  pwVar1 = (wostream *)wostream::flush(param_1);
  return pwVar1;
}

