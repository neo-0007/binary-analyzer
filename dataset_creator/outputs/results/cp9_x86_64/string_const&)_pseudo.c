
/* transaction clone for std::underflow_error::underflow_error(std::__cxx11::string const&) */

void std::underflow_error::underflow_error(std::__cxx11::string_const__(void *param_1,void *param_2)

{
  char *pcVar1;
  void *pvVar2;
  long in_FS_OFFSET;
  underflow_error auStack_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  underflow_error(auStack_38,"");
                    /* try { // try from 006b5300 to 006b5325 has its CatchHandler @ 006b534d */
  func_0x00000000(param_1,auStack_38,0x10);
  pcVar1 = (char *)_txnal_sso_string_c_str(param_2);
  pvVar2 = (void *)_txnal_runtime_error_get_msg(param_1);
  _txnal_cow_string_C1_for_exceptions(pvVar2,pcVar1,param_1);
  ~underflow_error(auStack_38);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

