
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::__cxx11::wstring std::TEMPNAMEPLACEHOLDERVALUE(std::__cxx11::wstring const&,
   std::__cxx11::wstring const&) */

wstring * std::operator+(wstring *param_1,wstring *param_2)

{
  undefined8 *in_RDX;
  
  *(wstring **)param_1 = param_1 + 0x10;
  __cxx11::wstring::_M_construct<wchar_t*>
            (param_1,*(long *)param_2,*(long *)param_2 + *(long *)(param_2 + 8) * 4);
                    /* try { // try from 006ab418 to 006ab41c has its CatchHandler @ 006ab42b */
  __cxx11::wstring::_M_append(param_1,(wchar_t *)*in_RDX,in_RDX[1]);
  return param_1;
}

