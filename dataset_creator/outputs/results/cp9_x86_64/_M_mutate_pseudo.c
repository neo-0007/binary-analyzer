
/* std::__cxx11::wstring::_M_mutate(unsigned long, unsigned long, wchar_t const*, unsigned long) */

void __thiscall
std::__cxx11::wstring::_M_mutate
          (wstring *this,ulong param_1,ulong param_2,wchar_t *param_3,ulong param_4)

{
  undefined4 *puVar1;
  ulong uVar2;
  wstring *pwVar3;
  long lVar4;
  long in_FS_OFFSET;
  ulong local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = (param_4 - param_2) + *(long *)(this + 8);
  lVar4 = *(long *)(this + 8) - (param_1 + param_2);
  if (this + 0x10 == *(wstring **)this) {
    uVar2 = 3;
  }
  else {
    uVar2 = *(ulong *)(this + 0x10);
  }
  puVar1 = (undefined4 *)_M_create(this,&local_48,uVar2);
  if (param_1 != 0) {
    if (param_1 == 1) {
      *puVar1 = **(undefined4 **)this;
    }
    else {
      __wmemcpy_chk(puVar1,*(undefined4 **)this,param_1,0x3fffffffffffffff);
    }
  }
  if ((param_3 != (wchar_t *)0x0) && (param_4 != 0)) {
    if (param_4 == 1) {
      puVar1[param_1] = *param_3;
    }
    else {
      __wmemcpy_chk(puVar1 + param_1,param_3,param_4,0x3fffffffffffffff);
    }
  }
  pwVar3 = *(wstring **)this;
  if (lVar4 != 0) {
    if (lVar4 == 1) {
      puVar1[param_1 + param_4] = *(undefined4 *)(pwVar3 + (param_1 + param_2) * 4);
    }
    else {
      __wmemcpy_chk(puVar1 + param_1 + param_4,pwVar3 + (param_1 + param_2) * 4,lVar4,
                    0x3fffffffffffffff);
      pwVar3 = *(wstring **)this;
    }
  }
  if (this + 0x10 != pwVar3) {
    operator_delete(pwVar3);
  }
  *(undefined4 **)this = puVar1;
  *(ulong *)(this + 0x10) = local_48;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

