
/* (anonymous namespace)::system_error_category::message[abi:cxx11](int) const */

string * (anonymous_namespace)::system_error_category::message_abi_cxx11_(int param_1)

{
  string *__s;
  size_t __n;
  string *__dest;
  int in_EDX;
  undefined4 in_register_0000003c;
  string *this;
  long in_FS_OFFSET;
  size_t local_38;
  long local_30;
  
  this = (string *)CONCAT44(in_register_0000003c,param_1);
  __dest = this + 0x10;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  __s = (string *)strerror(in_EDX);
  *(string **)this = __dest;
  if (__s == (string *)0x0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_logic_error("basic_string::_M_construct null not valid");
  }
  __n = strlen((char *)__s);
  local_38 = __n;
  if (__n < 0x10) {
    if (__n == 1) {
      this[0x10] = *__s;
      goto LAB_006b6432;
    }
    if (__n == 0) goto LAB_006b6432;
  }
  else {
    __dest = (string *)std::__cxx11::string::_M_create(this,&local_38,0);
    *(string **)this = __dest;
    *(size_t *)(this + 0x10) = local_38;
  }
  memcpy(__dest,__s,__n);
  __dest = *(string **)this;
LAB_006b6432:
  *(size_t *)(this + 8) = local_38;
  __dest[local_38] = (string)0x0;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return this;
}

