
/* std::moneypunct<wchar_t, true>::do_grouping() const */

void std::moneypunct<wchar_t,true>::do_grouping(void)

{
  char *__s;
  size_t __n;
  size_t *psVar1;
  size_t *__dest;
  long in_RSI;
  undefined8 *in_RDI;
  long in_FS_OFFSET;
  allocator local_31;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  __s = *(char **)(*(long *)(in_RSI + 0x10) + 0x10);
  if (__s == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    __throw_logic_error("basic_string::_S_construct null not valid");
  }
  __n = strlen(__s);
  if (__n == 0) {
    __dest = (size_t *)&DAT_00938278;
  }
  else {
    psVar1 = (size_t *)std::string::_Rep::_S_create(__n,0,&local_31);
    __dest = psVar1 + 3;
    if (__n == 1) {
      *(char *)(psVar1 + 3) = *__s;
    }
    else {
      __dest = (size_t *)memcpy(__dest,__s,__n);
    }
    if (psVar1 != &std::string::_Rep::_S_empty_rep_storage) {
      *(undefined4 *)(psVar1 + 2) = 0;
      *psVar1 = __n;
      *(undefined1 *)((long)psVar1 + __n + 0x18) = 0;
    }
  }
  *in_RDI = __dest;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

