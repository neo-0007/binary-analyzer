
/* std::__cxx11::wstring::_M_assign(std::__cxx11::wstring const&) */

void __thiscall std::__cxx11::wstring::_M_assign(wstring *this,wstring *param_1)

{
  ulong uVar1;
  wstring *pwVar2;
  ulong uVar3;
  long in_FS_OFFSET;
  ulong local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (this != param_1) {
    pwVar2 = *(wstring **)this;
    uVar1 = *(ulong *)(param_1 + 8);
    if (this + 0x10 == pwVar2) {
      uVar3 = 3;
    }
    else {
      uVar3 = *(ulong *)(this + 0x10);
    }
    if (uVar3 < uVar1) {
      local_38 = uVar1;
      pwVar2 = (wstring *)_M_create(this,&local_38,uVar3);
      if (this + 0x10 != *(wstring **)this) {
        operator_delete(*(wstring **)this);
      }
      *(wstring **)this = pwVar2;
      *(ulong *)(this + 0x10) = local_38;
    }
    if (uVar1 != 0) {
      if (uVar1 == 1) {
        *(undefined4 *)pwVar2 = **(undefined4 **)param_1;
      }
      else {
        __wmemcpy_chk(pwVar2,*(undefined4 **)param_1,uVar1,0x3fffffffffffffff);
        pwVar2 = *(wstring **)this;
      }
    }
    *(ulong *)(this + 8) = uVar1;
    *(undefined4 *)(pwVar2 + uVar1 * 4) = 0;
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
  return;
}

