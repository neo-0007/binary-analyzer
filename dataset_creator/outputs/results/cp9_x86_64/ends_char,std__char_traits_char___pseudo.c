
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::ostream& std::ends<char, std::char_traits<char> >(std::ostream&) */

ostream * std::ends<char,std::char_traits<char>>(ostream *param_1)

{
  ostream *poVar1;
  
  poVar1 = (ostream *)ostream::put(param_1,'\0');
  return poVar1;
}

