
/* std::_V2::error_category::_M_message(int) const */

error_category * __thiscall std::_V2::error_category::_M_message(error_category *this,int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 in_register_00000034;
  long in_FS_OFFSET;
  char *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  (**(code **)(*(long *)CONCAT44(in_register_00000034,param_1) + 0x18))(&local_28);
                    /* try { // try from 006b44f8 to 006b44fc has its CatchHandler @ 006b4569 */
  __sso_string::__sso_string((__sso_string *)this,local_28,*(ulong *)(local_28 + -0x18));
  if ((allocator *)(local_28 + -0x18) != (allocator *)&std::string::_Rep::_S_empty_rep_storage) {
    if (__libc_single_threaded == '\0') {
      LOCK();
      piVar1 = (int *)(local_28 + -8);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
    }
    else {
      iVar2 = *(int *)(local_28 + -8);
      *(int *)(local_28 + -8) = iVar2 + -1;
    }
    if (iVar2 < 1) {
      std::string::_Rep::_M_destroy((allocator *)(local_28 + -0x18));
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

