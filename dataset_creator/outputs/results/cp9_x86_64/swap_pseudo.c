
/* std::__cxx11::wstring::swap(std::__cxx11::wstring&) */

void __thiscall std::__cxx11::wstring::swap(wstring *this,wstring *param_1)

{
  wstring *__s1;
  wstring *__s2;
  wstring *pwVar1;
  wstring *pwVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  wchar_t awStack_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (this == param_1) goto LAB_006aa50d;
  pwVar1 = *(wstring **)this;
  __s1 = this + 0x10;
  pwVar2 = *(wstring **)param_1;
  __s2 = param_1 + 0x10;
  if (__s1 == pwVar1) {
    if (__s2 == pwVar2) {
      if (*(long *)(this + 8) == 0) {
        if (*(long *)(param_1 + 8) != 0) {
          wmemcpy((wchar_t *)__s1,(wchar_t *)__s2,4);
          *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 8);
          *(undefined8 *)(param_1 + 8) = 0;
          **(undefined4 **)param_1 = 0;
          goto LAB_006aa50d;
        }
        uVar5 = 0;
        uVar4 = 0;
      }
      else {
        if (*(long *)(param_1 + 8) == 0) {
          wmemcpy((wchar_t *)__s2,(wchar_t *)__s1,4);
          *(undefined8 *)(param_1 + 8) = *(undefined8 *)(this + 8);
          *(undefined8 *)(this + 8) = 0;
          **(undefined4 **)this = 0;
          goto LAB_006aa50d;
        }
        wmemcpy(awStack_48,(wchar_t *)__s2,4);
        wmemcpy((wchar_t *)__s2,(wchar_t *)__s1,4);
        wmemcpy((wchar_t *)__s1,awStack_48,4);
        uVar4 = *(undefined8 *)(param_1 + 8);
        uVar5 = *(undefined8 *)(this + 8);
      }
    }
    else {
      uVar3 = *(undefined8 *)(param_1 + 0x10);
      wmemcpy((wchar_t *)__s2,(wchar_t *)__s1,4);
      uVar5 = *(undefined8 *)(this + 8);
      *(undefined8 *)this = *(undefined8 *)param_1;
      uVar4 = *(undefined8 *)(param_1 + 8);
      *(wstring **)param_1 = __s2;
      *(undefined8 *)(this + 0x10) = uVar3;
    }
  }
  else {
    uVar3 = *(undefined8 *)(this + 0x10);
    if (__s2 == pwVar2) {
      wmemcpy((wchar_t *)__s1,(wchar_t *)__s2,4);
      *(undefined8 *)param_1 = *(undefined8 *)this;
      *(wstring **)this = __s1;
    }
    else {
      *(wstring **)this = pwVar2;
      *(wstring **)param_1 = pwVar1;
      *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0x10);
    }
    uVar4 = *(undefined8 *)(param_1 + 8);
    uVar5 = *(undefined8 *)(this + 8);
    *(undefined8 *)(param_1 + 0x10) = uVar3;
  }
  *(undefined8 *)(this + 8) = uVar4;
  *(undefined8 *)(param_1 + 8) = uVar5;
LAB_006aa50d:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}

