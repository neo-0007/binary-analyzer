
/* std::moneypunct<wchar_t, true>::curr_symbol() const */

void std::moneypunct<wchar_t,true>::curr_symbol(void)

{
  size_t sVar1;
  wchar_t *pwVar2;
  long *in_RSI;
  undefined8 *in_RDI;
  long in_FS_OFFSET;
  undefined1 local_21;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(code **)(*in_RSI + 0x28) == do_curr_symbol) {
    pwVar2 = *(wchar_t **)(in_RSI[2] + 0x30);
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
  }
  else {
    (**(code **)(*in_RSI + 0x28))();
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

