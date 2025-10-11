
/* std::codecvt_byname<wchar_t, char, __mbstate_t>::codecvt_byname(std::string const&, unsigned
   long) */

void __thiscall
std::codecvt_byname<wchar_t,char,__mbstate_t>::codecvt_byname
          (codecvt_byname<wchar_t,char,__mbstate_t> *this,string *param_1,ulong param_2)

{
  char *__s1;
  int iVar1;
  
  __s1 = *(char **)param_1;
  codecvt<wchar_t,char,__mbstate_t>::codecvt((codecvt<wchar_t,char,__mbstate_t> *)this,param_2);
  *(undefined ***)this = &PTR__codecvt_byname_0092bc88;
  if ((*__s1 != 'C') || (__s1[1] != '\0')) {
    iVar1 = strcmp(__s1,"POSIX");
    if (iVar1 != 0) {
                    /* try { // try from 0069784a to 0069785b has its CatchHandler @ 00697862 */
      locale::facet::_S_destroy_c_locale((__locale_struct **)(this + 0x10));
      locale::facet::_S_create_c_locale
                ((__locale_struct **)(this + 0x10),__s1,(__locale_struct *)0x0);
      return;
    }
  }
  return;
}

