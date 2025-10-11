
/* void std::__facet_shims::__collate_transform<char>(std::integral_constant<bool, true>,
   std::locale::facet const*, std::__facet_shims::__any_string&, char const*, char const*) */

void std::__facet_shims::__collate_transform<char>(long *param_1,string *param_2)

{
  string *__src;
  string *__dest;
  long in_FS_OFFSET;
  ulong local_50;
  string *local_48;
  ulong local_40;
  string local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  (**(code **)(*param_1 + 0x18))(&local_48,param_1);
  if (*(code **)(param_2 + 0x20) != (code *)0x0) {
                    /* try { // try from 0064e0fc to 0064e1d1 has its CatchHandler @ 0064e1d7 */
    (**(code **)(param_2 + 0x20))(param_2);
  }
  __src = local_48;
  __dest = param_2 + 0x10;
  *(string **)param_2 = __dest;
  if ((local_48 + local_40 != (string *)0x0) && (local_48 == (string *)0x0)) {
                    /* WARNING: Subroutine does not return */
    __throw_logic_error("basic_string::_M_construct null not valid");
  }
  local_50 = local_40;
  if (local_40 < 0x10) {
    if (local_40 == 1) {
      param_2[0x10] = *local_48;
      goto LAB_0064e138;
    }
    if (local_40 == 0) goto LAB_0064e138;
  }
  else {
    __dest = (string *)__cxx11::string::_M_create(param_2,&local_50,0);
    *(string **)param_2 = __dest;
    *(ulong *)(param_2 + 0x10) = local_50;
  }
  memcpy(__dest,__src,local_40);
  __dest = *(string **)param_2;
LAB_0064e138:
  *(ulong *)(param_2 + 8) = local_50;
  __dest[local_50] = (string)0x0;
  *(code **)(param_2 + 0x20) = (anonymous_namespace)::__destroy_string<char>;
  if (local_48 != local_38) {
    operator_delete(local_48);
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return;
}

