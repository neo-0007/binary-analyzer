
/* std::__cxx11::wstring::_M_replace_aux(unsigned long, unsigned long, unsigned long, wchar_t) */

wstring * __thiscall
std::__cxx11::wstring::_M_replace_aux
          (wstring *this,ulong param_1,ulong param_2,ulong param_3,wchar_t param_4)

{
  wstring *pwVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  
  lVar2 = *(long *)(this + 8);
  if (param_3 <= (param_2 + 0xfffffffffffffff) - lVar2) {
    pwVar1 = *(wstring **)this;
    uVar3 = (param_3 - param_2) + lVar2;
    if (pwVar1 == this + 0x10) {
      uVar4 = 3;
    }
    else {
      uVar4 = *(ulong *)(this + 0x10);
    }
    if (uVar4 < uVar3) {
      _M_mutate(this,param_1,param_2,(wchar_t *)0x0,param_3);
      pwVar1 = *(wstring **)this;
    }
    else {
      lVar2 = lVar2 - (param_2 + param_1);
      if ((lVar2 != 0) && (param_2 != param_3)) {
        if (lVar2 == 1) {
          *(undefined4 *)(pwVar1 + param_3 * 4 + param_1 * 4) =
               *(undefined4 *)(pwVar1 + param_2 * 4 + param_1 * 4);
        }
        else {
          __wmemmove_chk(pwVar1 + param_3 * 4 + param_1 * 4,pwVar1 + param_2 * 4 + param_1 * 4,lVar2
                         ,0x3fffffffffffffff);
          pwVar1 = *(wstring **)this;
        }
      }
    }
    if (param_3 != 0) {
      if (param_3 == 1) {
        *(wchar_t *)(pwVar1 + param_1 * 4) = param_4;
      }
      else {
        __wmemset_chk(pwVar1 + param_1 * 4,param_4,param_3,0x3fffffffffffffff);
        pwVar1 = *(wstring **)this;
      }
    }
    *(ulong *)(this + 8) = uVar3;
    *(undefined4 *)(pwVar1 + uVar3 * 4) = 0;
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __throw_length_error("basic_string::_M_replace_aux");
}

