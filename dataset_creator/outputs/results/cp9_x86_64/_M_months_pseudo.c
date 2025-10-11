
/* std::__timepunct<wchar_t>::_M_months(wchar_t const**) const */

void __thiscall std::__timepunct<wchar_t>::_M_months(__timepunct<wchar_t> *this,wchar_t **param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(this + 0x10);
  *param_1 = *(wchar_t **)(lVar1 + 200);
  param_1[1] = *(wchar_t **)(lVar1 + 0xd0);
  param_1[2] = *(wchar_t **)(lVar1 + 0xd8);
  param_1[3] = *(wchar_t **)(lVar1 + 0xe0);
  param_1[4] = *(wchar_t **)(lVar1 + 0xe8);
  param_1[5] = *(wchar_t **)(lVar1 + 0xf0);
  param_1[6] = *(wchar_t **)(lVar1 + 0xf8);
  param_1[7] = *(wchar_t **)(lVar1 + 0x100);
  param_1[8] = *(wchar_t **)(lVar1 + 0x108);
  param_1[9] = *(wchar_t **)(lVar1 + 0x110);
  param_1[10] = *(wchar_t **)(lVar1 + 0x118);
  param_1[0xb] = *(wchar_t **)(lVar1 + 0x120);
  return;
}

