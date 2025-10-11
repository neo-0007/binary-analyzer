
/* std::moneypunct_byname<wchar_t, true>::moneypunct_byname(std::string const&, unsigned long) */

void __thiscall
std::moneypunct_byname<wchar_t,true>::moneypunct_byname
          (moneypunct_byname<wchar_t,true> *this,string *param_1,ulong param_2)

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
  *(undefined ***)this = &PTR__moneypunct_0092bb28;
                    /* try { // try from 00696628 to 0069662c has its CatchHandler @ 006966b1 */
  moneypunct<wchar_t,true>::_M_initialize_moneypunct((__locale_struct *)this,(char *)0x0);
  *(undefined ***)this = &PTR__moneypunct_byname_0092bd48;
  if ((*__s1 != 'C') || (__s1[1] != '\0')) {
    iVar1 = strcmp(__s1,"POSIX");
    if (iVar1 != 0) {
                    /* try { // try from 00696686 to 006966a0 has its CatchHandler @ 006966a8 */
      locale::facet::_S_create_c_locale(&local_28,__s1,(__locale_struct *)0x0);
      moneypunct<wchar_t,true>::_M_initialize_moneypunct((__locale_struct *)this,(char *)local_28);
      locale::facet::_S_destroy_c_locale(&local_28);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

