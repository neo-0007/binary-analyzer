
/* void std::__facet_shims::__collate_transform<wchar_t>(std::integral_constant<bool, true>,
   std::locale::facet const*, std::__facet_shims::__any_string&, wchar_t const*, wchar_t const*) */

void std::__facet_shims::__collate_transform<wchar_t>(long *param_1,long *param_2)

{
  long in_FS_OFFSET;
  undefined1 *local_48;
  long local_40;
  undefined1 local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  (**(code **)(*param_1 + 0x18))(&local_48,param_1);
  if ((code *)param_2[4] != (code *)0x0) {
                    /* try { // try from 0064e238 to 0064e255 has its CatchHandler @ 0064e290 */
    (*(code *)param_2[4])(param_2);
  }
  *param_2 = (long)(param_2 + 2);
  __cxx11::wstring::_M_construct<wchar_t*>(param_2,local_48,local_48 + local_40 * 4);
  param_2[4] = (long)(anonymous_namespace)::__destroy_string<wchar_t>;
  if (local_48 != local_38) {
    operator_delete(local_48);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

