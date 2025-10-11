
/* std::istreambuf_iterator<char, std::char_traits<char> >
   std::__facet_shims::__money_get<char>(std::integral_constant<bool, true>, std::locale::facet
   const*, std::istreambuf_iterator<char, std::char_traits<char> >, std::istreambuf_iterator<char,
   std::char_traits<char> >, bool, std::ios_base&, std::_Ios_Iostate&, long double*,
   std::__facet_shims::__any_string*) */

undefined1  [16] __thiscall
std::__facet_shims::__money_get<char>
          (__facet_shims *this,undefined8 param_2,ulong param_3,undefined8 param_4,
          undefined8 param_5,undefined1 param_6,undefined8 param_7,int *param_8,long param_9,
          string *param_10)

{
  string *__src;
  ulong __n;
  string *__dest;
  long in_FS_OFFSET;
  undefined1 auVar1 [16];
  ulong local_70;
  string *local_68;
  ulong local_60;
  string local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_9 != 0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0064f2bf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      auVar1 = (**(code **)(*(long *)this + 0x10))(this,param_2,param_3);
      return auVar1;
    }
    goto LAB_0064f429;
  }
  local_58[0] = (string)0x0;
  local_60 = 0;
                    /* try { // try from 0064f2ea to 0064f411 has its CatchHandler @ 0064f42e */
  local_68 = local_58;
  auVar1 = (**(code **)(*(long *)this + 0x18))
                     (this,param_2,param_3,param_4,param_5,param_6,param_7,param_8,&local_68);
  if (*param_8 == 0) {
    if (*(code **)(param_10 + 0x20) != (code *)0x0) {
      (**(code **)(param_10 + 0x20))();
    }
    __n = local_60;
    __src = local_68;
    __dest = param_10 + 0x10;
    *(string **)param_10 = __dest;
    if ((local_68 + local_60 != (string *)0x0) && (local_68 == (string *)0x0)) {
                    /* WARNING: Subroutine does not return */
      __throw_logic_error("basic_string::_M_construct null not valid");
    }
    local_70 = local_60;
    if (local_60 < 0x10) {
      if (local_60 == 1) {
        param_10[0x10] = *local_68;
      }
      else if (local_60 != 0) goto LAB_0064f3e0;
    }
    else {
      __dest = (string *)__cxx11::string::_M_create(param_10,&local_70,0);
      *(string **)param_10 = __dest;
      *(ulong *)(param_10 + 0x10) = local_70;
LAB_0064f3e0:
      memcpy(__dest,__src,__n);
      __dest = *(string **)param_10;
    }
    *(ulong *)(param_10 + 8) = local_70;
    __dest[local_70] = (string)0x0;
    *(code **)(param_10 + 0x20) = (anonymous_namespace)::__destroy_string<char>;
  }
  if (local_68 != local_58) {
    operator_delete(local_68);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    auVar1._8_8_ = param_3 & 0xffffffff00000000 | auVar1._8_8_ & 0xffffffff;
    return auVar1;
  }
LAB_0064f429:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

