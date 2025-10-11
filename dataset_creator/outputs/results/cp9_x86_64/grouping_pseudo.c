
/* std::numpunct<wchar_t>::grouping() const */

void std::numpunct<wchar_t>::grouping(void)

{
  char *__s;
  size_t sVar1;
  long *in_RSI;
  char *pcVar2;
  undefined8 *in_RDI;
  long in_FS_OFFSET;
  undefined1 local_21;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(code **)(*in_RSI + 0x20) == do_grouping) {
    pcVar2 = (char *)0xffffffffffffffff;
    __s = *(char **)(in_RSI[2] + 0x10);
    if (__s != (char *)0x0) {
      sVar1 = strlen(__s);
      pcVar2 = __s + sVar1;
    }
    pcVar2 = std::string::_S_construct<char_const*>(__s,pcVar2,&local_21);
    *in_RDI = pcVar2;
  }
  else {
    (**(code **)(*in_RSI + 0x20))();
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

