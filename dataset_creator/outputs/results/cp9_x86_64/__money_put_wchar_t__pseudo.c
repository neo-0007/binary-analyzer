
/* std::ostreambuf_iterator<wchar_t, std::char_traits<wchar_t> >
   std::__facet_shims::__money_put<wchar_t>(std::integral_constant<bool, true>, std::locale::facet
   const*, std::ostreambuf_iterator<wchar_t, std::char_traits<wchar_t> >, bool, std::ios_base&,
   wchar_t, long double, std::__facet_shims::__any_string const*) */

undefined1  [16] __thiscall
std::__facet_shims::__money_put<wchar_t>
          (__facet_shims *this,undefined8 param_2,undefined8 param_3,undefined1 param_4,
          undefined8 param_5,undefined4 param_6,undefined8 param_7,undefined8 param_8,long *param_9)

{
  long in_FS_OFFSET;
  undefined1 auVar1 [16];
  undefined1 *local_68 [2];
  undefined1 local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_9 == (long *)0x0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0064f821. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      auVar1 = (**(code **)(*(long *)this + 0x10))(this,param_2,param_3,param_4);
      return auVar1;
    }
  }
  else {
    if (param_9[4] == 0) {
                    /* WARNING: Subroutine does not return */
      __throw_logic_error("uninitialized __any_string");
    }
    local_68[0] = local_58;
    __cxx11::wstring::_M_construct<wchar_t_const*>(local_68,*param_9,*param_9 + param_9[1] * 4);
                    /* try { // try from 0064f7a9 to 0064f7ac has its CatchHandler @ 0064f836 */
    auVar1 = (**(code **)(*(long *)this + 0x18))
                       (this,param_2,param_3,param_4,param_5,param_6,local_68);
    if (local_68[0] != local_58) {
      operator_delete(local_68[0]);
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return auVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

