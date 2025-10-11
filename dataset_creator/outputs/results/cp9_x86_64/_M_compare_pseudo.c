
/* std::collate<wchar_t>::_M_compare(wchar_t const*, wchar_t const*) const */

uint __thiscall
std::collate<wchar_t>::_M_compare(collate<wchar_t> *this,wchar_t *param_1,wchar_t *param_2)

{
  int iVar1;
  
  iVar1 = wcscoll_l(param_1,param_2,*(__locale_t *)(this + 0x10));
  return iVar1 >> 0x1e | (uint)(iVar1 != 0);
}

