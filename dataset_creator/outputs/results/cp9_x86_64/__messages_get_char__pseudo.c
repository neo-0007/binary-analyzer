
/* void std::__facet_shims::__messages_get<char>(std::integral_constant<bool, true>,
   std::locale::facet const*, std::__facet_shims::__any_string&, int, int, int, char const*,
   unsigned long) */

void std::__facet_shims::__messages_get<char>
               (long *param_1,string *param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,long param_6,long param_7)

{
  string *__src;
  string *__dest;
  long in_FS_OFFSET;
  ulong local_90;
  undefined1 *local_88 [2];
  undefined1 local_78 [16];
  string *local_68;
  ulong local_60;
  string local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_88[0] = local_78;
  __cxx11::string::_M_construct<char_const*>(local_88,param_6,param_7 + param_6);
                    /* try { // try from 0064ee15 to 0064ee17 has its CatchHandler @ 0064ef17 */
  (**(code **)(*param_1 + 0x18))(&local_68,param_1,param_3,param_4,param_5,local_88);
  if (*(code **)(param_2 + 0x20) != (code *)0x0) {
                    /* try { // try from 0064ee24 to 0064ef11 has its CatchHandler @ 0064ef20 */
    (**(code **)(param_2 + 0x20))(param_2);
  }
  __src = local_68;
  __dest = param_2 + 0x10;
  *(string **)param_2 = __dest;
  if ((local_68 + local_60 != (string *)0x0) && (local_68 == (string *)0x0)) {
                    /* WARNING: Subroutine does not return */
    __throw_logic_error("basic_string::_M_construct null not valid");
  }
  local_90 = local_60;
  if (local_60 < 0x10) {
    if (local_60 == 1) {
      param_2[0x10] = *local_68;
      goto LAB_0064ee61;
    }
    if (local_60 == 0) goto LAB_0064ee61;
  }
  else {
    __dest = (string *)__cxx11::string::_M_create(param_2,&local_90,0);
    *(string **)param_2 = __dest;
    *(ulong *)(param_2 + 0x10) = local_90;
  }
  memcpy(__dest,__src,local_60);
  __dest = *(string **)param_2;
LAB_0064ee61:
  *(ulong *)(param_2 + 8) = local_90;
  __dest[local_90] = (string)0x0;
  *(code **)(param_2 + 0x20) = (anonymous_namespace)::__destroy_string<char>;
  if (local_68 != local_58) {
    operator_delete(local_68);
  }
  if (local_88[0] != local_78) {
    operator_delete(local_88[0]);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return;
}

