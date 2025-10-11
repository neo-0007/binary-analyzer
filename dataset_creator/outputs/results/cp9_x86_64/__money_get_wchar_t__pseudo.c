
/* std::istreambuf_iterator<wchar_t, std::char_traits<wchar_t> >
   std::__facet_shims::__money_get<wchar_t>(std::integral_constant<bool, true>, std::locale::facet
   const*, std::istreambuf_iterator<wchar_t, std::char_traits<wchar_t> >,
   std::istreambuf_iterator<wchar_t, std::char_traits<wchar_t> >, bool, std::ios_base&,
   std::_Ios_Iostate&, long double*, std::__facet_shims::__any_string*) */

undefined1  [16] __thiscall
std::__facet_shims::__money_get<wchar_t>
          (__facet_shims *this,undefined8 param_2,ulong param_3,undefined8 param_4,
          undefined8 param_5,undefined1 param_6,undefined8 param_7,int *param_8,long param_9,
          long *param_10)

{
  long in_FS_OFFSET;
  undefined1 auVar1 [16];
  undefined4 *local_68;
  long local_60;
  undefined4 local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_9 == 0) {
    local_60 = 0;
    local_58[0] = 0;
                    /* try { // try from 0064f4f5 to 0064f588 has its CatchHandler @ 0064f59b */
    local_68 = local_58;
    auVar1 = (**(code **)(*(long *)this + 0x18))
                       (this,param_2,param_3,param_4,param_5,param_6,param_7,param_8,&local_68);
    if (*param_8 == 0) {
      if ((code *)param_10[4] != (code *)0x0) {
        (*(code *)param_10[4])(param_10);
      }
      *param_10 = (long)(param_10 + 2);
      __cxx11::wstring::_M_construct<wchar_t*>(param_10,local_68,local_68 + local_60);
      param_10[4] = (long)(anonymous_namespace)::__destroy_string<wchar_t>;
    }
    if (local_68 != local_58) {
      operator_delete(local_68);
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      auVar1._8_8_ = param_3 & 0xffffffff00000000 | auVar1._8_8_ & 0xffffffff;
      return auVar1;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0064f4c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar1 = (**(code **)(*(long *)this + 0x10))(this,param_2,param_3);
    return auVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

