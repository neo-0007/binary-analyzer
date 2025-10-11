
/* int std::__facet_shims::__messages_open<wchar_t>(std::integral_constant<bool, true>,
   std::locale::facet const*, char const*, unsigned long, std::locale const&) */

int std::__facet_shims::__messages_open<wchar_t>
              (long *param_1,long param_2,long param_3,undefined8 param_4)

{
  int iVar1;
  long in_FS_OFFSET;
  undefined1 *local_58 [2];
  undefined1 local_48 [24];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_58[0] = local_48;
  __cxx11::string::_M_construct<char_const*>(local_58,param_2,param_3 + param_2);
                    /* try { // try from 0064ed48 to 0064ed4a has its CatchHandler @ 0064ed7f */
  iVar1 = (**(code **)(*param_1 + 0x10))(param_1,local_58,param_4);
  if (local_58[0] != local_48) {
    operator_delete(local_58[0]);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

