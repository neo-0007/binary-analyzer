
/* void std::__facet_shims::__messages_get<wchar_t>(std::integral_constant<bool, true>,
   std::locale::facet const*, std::__facet_shims::__any_string&, int, int, int, wchar_t const*,
   unsigned long) */

void std::__facet_shims::__messages_get<wchar_t>
               (long *param_1,long *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
               ,long param_6,long param_7)

{
  long in_FS_OFFSET;
  undefined1 *local_88 [2];
  undefined1 local_78 [16];
  undefined1 *local_68;
  long local_60;
  undefined1 local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_88[0] = local_78;
  __cxx11::wstring::_M_construct<wchar_t_const*>(local_88,param_6,param_6 + param_7 * 4);
                    /* try { // try from 0064efd6 to 0064efd8 has its CatchHandler @ 0064f05f */
  (**(code **)(*param_1 + 0x18))(&local_68,param_1,param_3,param_4,param_5,local_88);
  if ((code *)param_2[4] != (code *)0x0) {
                    /* try { // try from 0064efe5 to 0064f003 has its CatchHandler @ 0064f056 */
    (*(code *)param_2[4])(param_2);
  }
  *param_2 = (long)(param_2 + 2);
  __cxx11::wstring::_M_construct<wchar_t*>(param_2,local_68,local_68 + local_60 * 4);
  param_2[4] = (long)(anonymous_namespace)::__destroy_string<wchar_t>;
  if (local_68 != local_58) {
    operator_delete(local_68);
  }
  if (local_88[0] != local_78) {
    operator_delete(local_88[0]);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

