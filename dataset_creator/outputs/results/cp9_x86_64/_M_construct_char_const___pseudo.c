
/* void std::__cxx11::string::_M_construct<char const*>(char const*, char const*,
   std::forward_iterator_tag) */

void std::__cxx11::string::_M_construct<char_const*>
               (string *param_1,undefined1 *param_2,long param_3)

{
  undefined1 *__dest;
  ulong __n;
  long in_FS_OFFSET;
  ulong local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_3 != 0) && (param_2 == (undefined1 *)0x0)) {
                    /* WARNING: Subroutine does not return */
    __throw_logic_error("basic_string::_M_construct null not valid");
  }
  __n = param_3 - (long)param_2;
  local_28 = __n;
  if (__n < 0x10) {
    __dest = *(undefined1 **)param_1;
    if (__n == 1) {
      *__dest = *param_2;
      __dest = *(undefined1 **)param_1;
      goto LAB_00693da6;
    }
    if (__n == 0) goto LAB_00693da6;
  }
  else {
    __dest = (undefined1 *)_M_create(param_1,&local_28,0);
    *(undefined1 **)param_1 = __dest;
    *(ulong *)(param_1 + 0x10) = local_28;
  }
  memcpy(__dest,param_2,__n);
  __dest = *(undefined1 **)param_1;
LAB_00693da6:
  *(ulong *)(param_1 + 8) = local_28;
  __dest[local_28] = 0;
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return;
}

