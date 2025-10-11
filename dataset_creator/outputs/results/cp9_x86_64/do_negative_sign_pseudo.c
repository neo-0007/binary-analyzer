
/* std::moneypunct<wchar_t, false>::do_negative_sign() const */

void std::moneypunct<wchar_t,false>::do_negative_sign(void)

{
  size_t sVar1;
  wchar_t *pwVar2;
  long in_RSI;
  undefined8 *in_RDI;
  long in_FS_OFFSET;
  undefined1 local_21;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  pwVar2 = *(wchar_t **)(*(long *)(in_RSI + 0x10) + 0x50);
  if (pwVar2 == (wchar_t *)0x0) {
                    /* WARNING: Subroutine does not return */
    __throw_logic_error("basic_string::_S_construct null not valid");
  }
  sVar1 = wcslen(pwVar2);
  if (pwVar2 == pwVar2 + sVar1) {
    pwVar2 = (wchar_t *)&DAT_00938298;
  }
  else {
    pwVar2 = std::wstring::_S_construct<wchar_t_const*>(pwVar2,pwVar2 + sVar1,&local_21);
  }
  *in_RDI = pwVar2;
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

