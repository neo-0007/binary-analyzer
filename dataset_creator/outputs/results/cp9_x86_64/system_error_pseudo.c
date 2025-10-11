
/* std::system_error::system_error(std::error_code, char const*) */

void __thiscall
std::system_error::system_error(system_error *this,ulong param_2,long *param_3,char *param_4)

{
  long *plVar1;
  size_t sVar2;
  long in_FS_OFFSET;
  long *local_a8;
  long local_a0;
  long local_98;
  long lStack_90;
  long *local_88;
  long local_80;
  long local_78;
  long lStack_70;
  undefined1 *local_68;
  undefined8 local_60;
  undefined1 local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(code **)(*param_3 + 0x20) == ::(anonymous_namespace)::io_error_category::message_abi_cxx11_)
  {
    local_68 = local_58;
    local_58[0] = 0;
    local_60 = 0;
    if ((int)param_2 == 1) {
                    /* try { // try from 006b5b54 to 006b5b58 has its CatchHandler @ 006b5bcb */
      __cxx11::string::_M_replace((string *)&local_68,0,0,"iostream error",0xe);
    }
    else {
                    /* try { // try from 006b59ed to 006b59f1 has its CatchHandler @ 006b5bcb */
      __cxx11::string::_M_replace((string *)&local_68,0,0,"Unknown error",0xd);
    }
  }
  else {
    (**(code **)(*param_3 + 0x20))(&local_68,param_3,param_2 & 0xffffffff);
  }
                    /* try { // try from 006b5a06 to 006b5a0a has its CatchHandler @ 006b5bc2 */
  plVar1 = (long *)__cxx11::string::_M_replace((string *)&local_68,0,0,": ",2);
  if ((long *)*plVar1 == plVar1 + 2) {
    local_78 = plVar1[2];
    lStack_70 = plVar1[3];
    local_88 = &local_78;
  }
  else {
    local_78 = plVar1[2];
    local_88 = (long *)*plVar1;
  }
  local_80 = plVar1[1];
  *(undefined1 *)(plVar1 + 2) = 0;
  *plVar1 = (long)(plVar1 + 2);
  plVar1[1] = 0;
  sVar2 = strlen(param_4);
                    /* try { // try from 006b5a62 to 006b5a66 has its CatchHandler @ 006b5b7e */
  plVar1 = (long *)__cxx11::string::_M_replace((string *)&local_88,0,0,param_4,sVar2);
  if ((long *)*plVar1 == plVar1 + 2) {
    local_98 = plVar1[2];
    lStack_90 = plVar1[3];
    local_a8 = &local_98;
  }
  else {
    local_98 = plVar1[2];
    local_a8 = (long *)*plVar1;
  }
  local_a0 = plVar1[1];
  *(undefined1 *)(plVar1 + 2) = 0;
  *plVar1 = (long)(plVar1 + 2);
  plVar1[1] = 0;
                    /* try { // try from 006b5aab to 006b5aaf has its CatchHandler @ 006b5b87 */
  runtime_error::runtime_error((runtime_error *)this,(string *)&local_a8);
  if (local_a8 != &local_98) {
    operator_delete(local_a8);
  }
  if (local_88 != &local_78) {
    operator_delete(local_88);
  }
  if (local_68 != local_58) {
    operator_delete(local_68);
  }
  *(ulong *)(this + 0x10) = param_2;
  *(long **)(this + 0x18) = param_3;
  *(undefined ***)this = &PTR__system_error_0092c8d0;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

