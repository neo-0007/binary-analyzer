
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::ostream& std::flush<char, std::char_traits<char> >(std::ostream&) */

ostream * std::flush<char,std::char_traits<char>>(ostream *param_1)

{
  ostream *poVar1;
  
  poVar1 = (ostream *)ostream::flush(param_1);
  return poVar1;
}

