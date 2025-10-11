
/* std::collate<wchar_t>::do_compare(wchar_t const*, wchar_t const*, wchar_t const*, wchar_t const*)
   const */

int __thiscall
std::collate<wchar_t>::do_compare
          (collate<wchar_t> *this,wchar_t *param_1,wchar_t *param_2,wchar_t *param_3,
          wchar_t *param_4)

{
  wchar_t *pwVar1;
  long lVar2;
  int iVar3;
  wchar_t wVar4;
  wchar_t *pwVar5;
  size_t sVar6;
  wchar_t *pwVar7;
  long in_FS_OFFSET;
  wchar_t *local_68;
  undefined1 local_49;
  wchar_t *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == param_2) {
    pwVar5 = (wchar_t *)&DAT_00938298;
  }
  else {
    if (param_1 == (wchar_t *)0x0) {
                    /* WARNING: Subroutine does not return */
      __throw_logic_error("basic_string::_S_construct null not valid");
    }
    pwVar5 = std::wstring::_S_construct<wchar_t_const*>(param_1,param_2,&local_49);
  }
  local_48 = pwVar5;
  if (param_3 == param_4) {
    local_68 = (wchar_t *)&DAT_00938298;
  }
  else {
    if (param_3 == (wchar_t *)0x0) {
                    /* WARNING: Subroutine does not return */
      __throw_logic_error("basic_string::_S_construct null not valid");
    }
                    /* try { // try from 00694bc2 to 00694d54 has its CatchHandler @ 00694d61 */
    local_68 = std::wstring::_S_construct<wchar_t_const*>(param_3,param_4,&local_49);
  }
  pwVar1 = pwVar5 + *(long *)(pwVar5 + -6);
  lVar2 = *(long *)(local_68 + -6);
  pwVar7 = local_68;
  do {
    iVar3 = _M_compare(this,pwVar5,pwVar7);
    if (iVar3 != 0) {
LAB_00694c44:
      if ((allocator *)(local_68 + -6) != (allocator *)&std::wstring::_Rep::_S_empty_rep_storage) {
        if (__libc_single_threaded == '\0') {
          LOCK();
          pwVar5 = local_68 + -2;
          wVar4 = *pwVar5;
          *pwVar5 = *pwVar5 + L'\xffffffff';
          UNLOCK();
        }
        else {
          wVar4 = local_68[-2];
          local_68[-2] = wVar4 + L'\xffffffff';
        }
        if (wVar4 < L'\x01') {
          std::wstring::_Rep::_M_destroy((allocator *)(local_68 + -6));
        }
      }
      if ((allocator *)(local_48 + -6) != (allocator *)&std::wstring::_Rep::_S_empty_rep_storage) {
        if (__libc_single_threaded == '\0') {
          LOCK();
          pwVar5 = local_48 + -2;
          wVar4 = *pwVar5;
          *pwVar5 = *pwVar5 + L'\xffffffff';
          UNLOCK();
        }
        else {
          wVar4 = local_48[-2];
          local_48[-2] = wVar4 + L'\xffffffff';
        }
        if (wVar4 < L'\x01') {
          std::wstring::_Rep::_M_destroy((allocator *)(local_48 + -6));
        }
      }
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return iVar3;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail_local();
    }
    sVar6 = wcslen(pwVar5);
    pwVar5 = pwVar5 + sVar6;
    sVar6 = wcslen(pwVar7);
    pwVar7 = pwVar7 + sVar6;
    if (pwVar1 == pwVar5) {
      if (local_68 + lVar2 == pwVar7) goto LAB_00694c44;
      if (pwVar1 == pwVar5) {
        iVar3 = -1;
        goto LAB_00694c44;
      }
    }
    if (local_68 + lVar2 == pwVar7) {
      iVar3 = 1;
      goto LAB_00694c44;
    }
    pwVar5 = pwVar5 + 1;
    pwVar7 = pwVar7 + 1;
  } while( true );
}

