
/* std::collate<wchar_t>::_M_transform(wchar_t*, wchar_t const*, unsigned long) const */

void __thiscall
std::collate<wchar_t>::_M_transform
          (collate<wchar_t> *this,wchar_t *param_1,wchar_t *param_2,ulong param_3)

{
  wcsxfrm_l(param_1,param_2,param_3,*(__locale_t *)(this + 0x10));
  return;
}

