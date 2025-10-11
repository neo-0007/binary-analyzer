
/* std::__cxx11::wstring::_M_replace(unsigned long, unsigned long, wchar_t const*, unsigned long) */

wstring * __thiscall
std::__cxx11::wstring::_M_replace
          (wstring *this,ulong param_1,ulong param_2,wchar_t *param_3,ulong param_4)

{
  ulong uVar1;
  wstring *pwVar2;
  wstring *pwVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  bool bVar7;
  bool bVar8;
  
  lVar6 = *(long *)(this + 8);
  if ((param_2 + 0xfffffffffffffff) - lVar6 < param_4) {
                    /* WARNING: Subroutine does not return */
    __throw_length_error("basic_string::_M_replace");
  }
  pwVar3 = *(wstring **)this;
  uVar1 = lVar6 + (param_4 - param_2);
  if (pwVar3 == this + 0x10) {
    uVar4 = 3;
  }
  else {
    uVar4 = *(ulong *)(this + 0x10);
  }
  if (uVar4 < uVar1) {
    _M_mutate(this,param_1,param_2,param_3,param_4);
    goto LAB_006a9731;
  }
  pwVar2 = pwVar3 + param_1 * 4;
  lVar5 = lVar6 - (param_1 + param_2);
  bVar7 = lVar5 == 0;
  bVar8 = param_2 == param_4;
  if ((param_3 < pwVar3) || (pwVar3 + lVar6 * 4 < param_3)) {
    if (!bVar7 && !bVar8) {
      if (lVar5 == 1) {
        *(undefined4 *)(pwVar2 + param_4 * 4) = *(undefined4 *)(pwVar2 + param_2 * 4);
      }
      else {
        __wmemmove_chk(pwVar2 + param_4 * 4,pwVar2 + param_2 * 4,lVar5,0x3fffffffffffffff);
      }
    }
    if (param_4 != 0) {
      if (param_4 == 1) {
LAB_006a97ee:
        *(wchar_t *)pwVar2 = *param_3;
        pwVar3 = *(wstring **)this;
        goto LAB_006a9735;
      }
      __wmemcpy_chk(pwVar2,param_3,param_4,0x3fffffffffffffff);
    }
  }
  else {
    if (param_4 - 1 < param_2) {
      if (param_4 == 1) {
        *(wchar_t *)pwVar2 = *param_3;
        goto LAB_006a977a;
      }
      if (param_4 != 0) {
        __wmemmove_chk(pwVar2,param_3,param_4,0x3fffffffffffffff);
        goto LAB_006a977a;
      }
      if (bVar7 || bVar8) goto LAB_006a9735;
LAB_006a977f:
      if (lVar5 == 1) {
        *(undefined4 *)(pwVar2 + param_4 * 4) = *(undefined4 *)(pwVar2 + param_2 * 4);
      }
      else {
        __wmemmove_chk(pwVar2 + param_4 * 4,pwVar2 + param_2 * 4,lVar5,0x3fffffffffffffff);
      }
    }
    else {
LAB_006a977a:
      if (!bVar7 && !bVar8) goto LAB_006a977f;
    }
    if (param_2 < param_4) {
      pwVar3 = pwVar2 + param_2 * 4;
      if (pwVar3 < (wstring *)(param_3 + param_4)) {
        if (param_3 < pwVar3) {
          lVar6 = (long)pwVar3 - (long)param_3 >> 2;
          if (lVar6 == 1) {
            *(wchar_t *)pwVar2 = *param_3;
          }
          else if (lVar6 != 0) {
            __wmemmove_chk(pwVar2,param_3,lVar6,0x3fffffffffffffff);
          }
          lVar6 = param_4 - lVar6;
          if (lVar6 == 1) {
            *(undefined4 *)(pwVar2 + ((long)pwVar3 - (long)param_3)) =
                 *(undefined4 *)(pwVar2 + param_4 * 4);
            pwVar3 = *(wstring **)this;
            goto LAB_006a9735;
          }
          if (lVar6 != 0) {
            __wmemcpy_chk(pwVar2 + ((long)pwVar3 - (long)param_3),pwVar2 + param_4 * 4,lVar6,
                          0x3fffffffffffffff);
            pwVar3 = *(wstring **)this;
            goto LAB_006a9735;
          }
        }
        else {
          if (param_4 == 1) {
            *(wchar_t *)pwVar2 =
                 *(wchar_t *)
                  (pwVar2 + (((long)param_3 - (long)pwVar2 >> 2) + (param_4 - param_2)) * 4);
            pwVar3 = *(wstring **)this;
            goto LAB_006a9735;
          }
          if (param_4 != 0) {
            __wmemcpy_chk(pwVar2,pwVar2 + (((long)param_3 - (long)pwVar2 >> 2) + (param_4 - param_2)
                                          ) * 4,param_4,0x3fffffffffffffff);
            pwVar3 = *(wstring **)this;
            goto LAB_006a9735;
          }
        }
      }
      else {
        if (param_4 == 1) goto LAB_006a97ee;
        if (param_4 != 0) {
          __wmemmove_chk(pwVar2,param_3,param_4,0x3fffffffffffffff);
          pwVar3 = *(wstring **)this;
          goto LAB_006a9735;
        }
      }
    }
  }
LAB_006a9731:
  pwVar3 = *(wstring **)this;
LAB_006a9735:
  *(ulong *)(this + 8) = uVar1;
  *(undefined4 *)(pwVar3 + uVar1 * 4) = 0;
  return this;
}

