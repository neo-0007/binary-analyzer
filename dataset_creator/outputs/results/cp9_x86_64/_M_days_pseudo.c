
/* std::__timepunct<wchar_t>::_M_days(wchar_t const**) const */

void __thiscall std::__timepunct<wchar_t>::_M_days(__timepunct<wchar_t> *this,wchar_t **param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(this + 0x10);
  *param_1 = *(wchar_t **)(lVar1 + 0x58);
  param_1[1] = *(wchar_t **)(lVar1 + 0x60);
  param_1[2] = *(wchar_t **)(lVar1 + 0x68);
  param_1[3] = *(wchar_t **)(lVar1 + 0x70);
  param_1[4] = *(wchar_t **)(lVar1 + 0x78);
  param_1[5] = *(wchar_t **)(lVar1 + 0x80);
  param_1[6] = *(wchar_t **)(lVar1 + 0x88);
  return;
}

