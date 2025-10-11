
/* std::_V2::error_category::_M_message[abi:cxx11](int) const */

error_category * __thiscall
std::_V2::error_category::_M_message_abi_cxx11_(error_category *this,int param_1)

{
  undefined4 in_register_00000034;
  long in_FS_OFFSET;
  char *local_38;
  ulong local_30;
  char local_28 [24];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  (**(code **)(*(long *)CONCAT44(in_register_00000034,param_1) + 0x20))(&local_38);
                    /* try { // try from 006b6382 to 006b6386 has its CatchHandler @ 006b63b9 */
  __cow_string::__cow_string((__cow_string *)this,local_38,local_30);
  if (local_38 != local_28) {
    operator_delete(local_38);
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

