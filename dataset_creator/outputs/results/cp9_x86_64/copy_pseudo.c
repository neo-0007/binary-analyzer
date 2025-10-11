
/* std::__cxx11::wstring::copy(wchar_t*, unsigned long, unsigned long) const */

ulong __thiscall
std::__cxx11::wstring::copy(wstring *this,wchar_t *param_1,ulong param_2,ulong param_3)

{
  wchar_t *pwVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = *(ulong *)(this + 8);
  if (uVar2 < param_3) {
                    /* WARNING: Subroutine does not return */
    __throw_out_of_range_fmt
              ("%s: __pos (which is %zu) > this->size() (which is %zu)","basic_string::copy",param_3
               ,uVar2);
  }
  uVar3 = uVar2 - param_3;
  if (param_2 < uVar2 - param_3) {
    uVar3 = param_2;
  }
  if (uVar3 != 0) {
    pwVar1 = (wchar_t *)(*(long *)this + param_3 * 4);
    if (uVar3 == 1) {
      *param_1 = *pwVar1;
      return 1;
    }
    __wmemcpy_chk(param_1,pwVar1,uVar3,0x3fffffffffffffff);
  }
  return uVar3;
}

