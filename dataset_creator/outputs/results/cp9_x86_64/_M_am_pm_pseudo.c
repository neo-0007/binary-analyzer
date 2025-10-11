
/* std::__timepunct<wchar_t>::_M_am_pm(wchar_t const**) const */

void __thiscall std::__timepunct<wchar_t>::_M_am_pm(__timepunct<wchar_t> *this,wchar_t **param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(this + 0x10);
  *param_1 = *(wchar_t **)(lVar1 + 0x40);
  param_1[1] = *(wchar_t **)(lVar1 + 0x48);
  return;
}

