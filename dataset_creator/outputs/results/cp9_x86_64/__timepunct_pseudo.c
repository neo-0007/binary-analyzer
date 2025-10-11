
/* std::__timepunct<wchar_t>::__timepunct(__locale_struct*, char const*, unsigned long) */

void __thiscall
std::__timepunct<wchar_t>::__timepunct
          (__timepunct<wchar_t> *this,__locale_struct *param_1,char *param_2,ulong param_3)

{
  int iVar1;
  char *__s2;
  size_t sVar2;
  void *__dest;
  
  *(uint *)(this + 8) = (uint)(param_3 != 0);
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined ***)this = &PTR____timepunct_0092bb08;
  *(undefined8 *)(this + 0x20) = 0;
  __s2 = (char *)locale::facet::_S_get_c_name();
  iVar1 = strcmp(param_2,__s2);
  if (iVar1 != 0) {
    sVar2 = strlen(param_2);
                    /* try { // try from 00696e2f to 00696e33 has its CatchHandler @ 00696e47 */
    __dest = operator_new__(sVar2 + 1);
    __s2 = (char *)memcpy(__dest,param_2,sVar2 + 1);
  }
  *(char **)(this + 0x20) = __s2;
                    /* try { // try from 00696e0a to 00696e0e has its CatchHandler @ 00696e50 */
  _M_initialize_timepunct(this,param_1);
  return;
}

