
/* std::ctype<wchar_t>::_M_convert_to_wmask(unsigned short) const */

wctype_t __thiscall std::ctype<wchar_t>::_M_convert_to_wmask(ctype<wchar_t> *this,ushort param_1)

{
  wctype_t wVar1;
  
  if (param_1 == 0x800) {
    wVar1 = wctype_l("digit",*(__locale_t *)(this + 0x10));
    return wVar1;
  }
  if (param_1 < 0x801) {
    if (param_1 == 0x100) {
      wVar1 = wctype_l("upper",*(__locale_t *)(this + 0x10));
      return wVar1;
    }
    if (param_1 < 0x101) {
      if (param_1 == 2) {
        wVar1 = wctype_l("cntrl",*(__locale_t *)(this + 0x10));
        return wVar1;
      }
      if (param_1 == 4) {
        wVar1 = wctype_l("punct",*(__locale_t *)(this + 0x10));
        return wVar1;
      }
      if (param_1 == 1) {
        wVar1 = wctype_l("blank",*(__locale_t *)(this + 0x10));
        return wVar1;
      }
    }
    else {
      if (param_1 == 0x200) {
        wVar1 = wctype_l("lower",*(__locale_t *)(this + 0x10));
        return wVar1;
      }
      if (param_1 == 0x400) {
        wVar1 = wctype_l("alpha",*(__locale_t *)(this + 0x10));
        return wVar1;
      }
    }
  }
  else {
    if (param_1 == 0x1000) {
      wVar1 = wctype_l("xdigit",*(__locale_t *)(this + 0x10));
      return wVar1;
    }
    if (param_1 < 0x1001) {
      if (param_1 == 0xc00) {
        wVar1 = wctype_l("alnum",*(__locale_t *)(this + 0x10));
        return wVar1;
      }
      if (param_1 == 0xc04) {
        wVar1 = wctype_l("graph",*(__locale_t *)(this + 0x10));
        return wVar1;
      }
    }
    else {
      if (param_1 == 0x2000) {
        wVar1 = wctype_l("space",*(__locale_t *)(this + 0x10));
        return wVar1;
      }
      if (param_1 == 0x4000) {
        wVar1 = wctype_l("print",*(__locale_t *)(this + 0x10));
        return wVar1;
      }
    }
  }
  return 0;
}

