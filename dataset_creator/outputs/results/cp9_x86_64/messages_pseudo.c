
/* std::messages<wchar_t>::messages(__locale_struct*, char const*, unsigned long) */

void __thiscall
std::messages<wchar_t>::messages
          (messages<wchar_t> *this,__locale_struct *param_1,char *param_2,ulong param_3)

{
  int iVar1;
  char *__s2;
  undefined8 uVar2;
  size_t sVar3;
  __locale_struct *local_30 [2];
  
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(uint *)(this + 8) = (uint)(param_3 != 0);
  *(undefined ***)this = &PTR__messages_0092bbf8;
  local_30[0] = param_1;
  __s2 = (char *)locale::facet::_S_get_c_name();
  iVar1 = strcmp(param_2,__s2);
  if (iVar1 != 0) {
    sVar3 = strlen(param_2);
                    /* try { // try from 0069752f to 00697533 has its CatchHandler @ 00697547 */
    __s2 = (char *)operator_new__(sVar3 + 1);
    memcpy(__s2,param_2,sVar3 + 1);
  }
  *(char **)(this + 0x18) = __s2;
  uVar2 = locale::facet::_S_clone_c_locale(local_30);
  *(undefined8 *)(this + 0x10) = uVar2;
  return;
}

