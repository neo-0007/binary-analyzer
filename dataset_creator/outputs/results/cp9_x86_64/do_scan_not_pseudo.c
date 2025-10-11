
/* std::ctype<wchar_t>::do_scan_not(unsigned short, wchar_t const*, wchar_t const*) const */

wchar_t * __thiscall
std::ctype<wchar_t>::do_scan_not
          (ctype<wchar_t> *this,ushort param_1,wchar_t *param_2,wchar_t *param_3)

{
  char cVar1;
  
  if (param_2 < param_3) {
    do {
      cVar1 = (**(code **)(*(long *)this + 0x10))(this,param_1,*param_2);
      if (cVar1 == '\0') {
        return param_2;
      }
      param_2 = param_2 + 1;
    } while (param_2 < param_3);
  }
  return param_2;
}

