
/* std::collate_byname<wchar_t>::collate_byname(std::string const&, unsigned long) */

void __thiscall
std::collate_byname<wchar_t>::collate_byname
          (collate_byname<wchar_t> *this,string *param_1,ulong param_2)

{
  char *__s1;
  int iVar1;
  undefined8 uVar2;
  
  __s1 = *(char **)param_1;
  *(uint *)(this + 8) = (uint)(param_2 != 0);
  *(undefined ***)this = &PTR__collate_0092b890;
                    /* try { // try from 00697a58 to 00697a5c has its CatchHandler @ 00697ac3 */
  uVar2 = locale::facet::_S_get_c_locale();
  *(undefined8 *)(this + 0x10) = uVar2;
  *(undefined ***)this = &PTR__collate_byname_0092b8c8;
  if ((*__s1 != 'C') || (__s1[1] != '\0')) {
    iVar1 = strcmp(__s1,"POSIX");
    if (iVar1 != 0) {
                    /* try { // try from 00697aa2 to 00697ab3 has its CatchHandler @ 00697aba */
      locale::facet::_S_destroy_c_locale((__locale_struct **)(this + 0x10));
      locale::facet::_S_create_c_locale
                ((__locale_struct **)(this + 0x10),__s1,(__locale_struct *)0x0);
      return;
    }
  }
  return;
}

