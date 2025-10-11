
/* std::messages<wchar_t>::do_open(std::string const&, std::locale const&) const */

undefined4 __thiscall
std::messages<wchar_t>::do_open(messages<wchar_t> *this,string *param_1,locale *param_2)

{
  undefined4 uVar1;
  codecvt *pcVar2;
  char *pcVar3;
  Catalogs *pCVar4;
  long in_FS_OFFSET;
  locale alStack_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  pcVar2 = use_facet<std::codecvt<wchar_t,char,__mbstate_t>>(param_2);
  pcVar3 = nl_langinfo_l(0xe,*(__locale_t *)(pcVar2 + 0x10));
  bind_textdomain_codeset(*(undefined8 *)param_1,pcVar3);
  pCVar4 = (Catalogs *)get_catalogs();
  locale::locale(alStack_38,param_2);
                    /* try { // try from 006b1654 to 006b1658 has its CatchHandler @ 006b1687 */
  uVar1 = Catalogs::_M_add(pCVar4,*(undefined8 *)param_1,alStack_38);
  locale::~locale(alStack_38);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

