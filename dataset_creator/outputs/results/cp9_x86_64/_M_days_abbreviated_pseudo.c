
/* std::__timepunct<wchar_t>::_M_days_abbreviated(wchar_t const**) const */

void __thiscall
std::__timepunct<wchar_t>::_M_days_abbreviated(__timepunct<wchar_t> *this,wchar_t **param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(this + 0x10);
  *param_1 = *(wchar_t **)(lVar1 + 0x90);
  param_1[1] = *(wchar_t **)(lVar1 + 0x98);
  param_1[2] = *(wchar_t **)(lVar1 + 0xa0);
  param_1[3] = *(wchar_t **)(lVar1 + 0xa8);
  param_1[4] = *(wchar_t **)(lVar1 + 0xb0);
  param_1[5] = *(wchar_t **)(lVar1 + 0xb8);
  param_1[6] = *(wchar_t **)(lVar1 + 0xc0);
  return;
}

