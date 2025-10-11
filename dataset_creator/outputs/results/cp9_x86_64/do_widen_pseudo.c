
/* std::ctype<wchar_t>::do_widen(char const*, char const*, wchar_t*) const */

char * __thiscall
std::ctype<wchar_t>::do_widen(ctype<wchar_t> *this,char *param_1,char *param_2,wchar_t *param_3)

{
  long lVar1;
  
  if (param_1 < param_2) {
    lVar1 = 0;
    do {
      param_3[lVar1] = *(wchar_t *)(this + (ulong)(byte)param_1[lVar1] * 4 + 0x9c);
      lVar1 = lVar1 + 1;
    } while ((long)param_2 - (long)param_1 != lVar1);
  }
  return param_2;
}

