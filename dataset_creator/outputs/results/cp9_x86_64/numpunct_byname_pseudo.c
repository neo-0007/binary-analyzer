
/* std::numpunct_byname<wchar_t>::numpunct_byname(std::string const&, unsigned long) */

void __thiscall
std::numpunct_byname<wchar_t>::numpunct_byname
          (numpunct_byname<wchar_t> *this,string *param_1,ulong param_2)

{
  char *__s1;
  int iVar1;
  long in_FS_OFFSET;
  __locale_struct *local_28;
  long local_20;
  
  __s1 = *(char **)param_1;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)(this + 0x10) = 0;
  *(uint *)(this + 8) = (uint)(param_2 != 0);
  *(undefined ***)this = &PTR__numpunct_0092b980;
                    /* try { // try from 00696c06 to 00696c0a has its CatchHandler @ 00696c8f */
  numpunct<wchar_t>::_M_initialize_numpunct((numpunct<wchar_t> *)this,(__locale_struct *)0x0);
  *(undefined ***)this = &PTR__numpunct_byname_0092b9c8;
  if ((*__s1 != 'C') || (__s1[1] != '\0')) {
    iVar1 = strcmp(__s1,"POSIX");
    if (iVar1 != 0) {
                    /* try { // try from 00696c66 to 00696c7e has its CatchHandler @ 00696c86 */
      locale::facet::_S_create_c_locale(&local_28,__s1,(__locale_struct *)0x0);
      numpunct<wchar_t>::_M_initialize_numpunct((numpunct<wchar_t> *)this,local_28);
      locale::facet::_S_destroy_c_locale(&local_28);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

