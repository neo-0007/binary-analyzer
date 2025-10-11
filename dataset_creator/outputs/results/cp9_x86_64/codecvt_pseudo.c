
/* std::codecvt<wchar_t, char, __mbstate_t>::codecvt(__locale_struct*, unsigned long) */

void __thiscall
std::codecvt<wchar_t,char,__mbstate_t>::codecvt
          (codecvt<wchar_t,char,__mbstate_t> *this,__locale_struct *param_1,ulong param_2)

{
  undefined8 uVar1;
  __locale_struct *local_10;
  
  *(uint *)(this + 8) = (uint)(param_2 != 0);
  *(undefined ***)this = &PTR__codecvt_0092c388;
  local_10 = param_1;
  uVar1 = locale::facet::_S_clone_c_locale(&local_10);
  *(undefined8 *)(this + 0x10) = uVar1;
  return;
}

