
/* std::__cxx11::wstring::compare(unsigned long, unsigned long, wchar_t const*, unsigned long) const
    */

ulong __thiscall
std::__cxx11::wstring::compare
          (wstring *this,ulong param_1,ulong param_2,wchar_t *param_3,ulong param_4)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = *(ulong *)(this + 8);
  if (uVar2 < param_1) {
                    /* WARNING: Subroutine does not return */
    __throw_out_of_range_fmt
              ("%s: __pos (which is %zu) > this->size() (which is %zu)","basic_string::compare",
               param_1,uVar2);
  }
  uVar3 = uVar2 - param_1;
  if (param_2 < uVar2 - param_1) {
    uVar3 = param_2;
  }
  uVar2 = param_4;
  if (uVar3 <= param_4) {
    uVar2 = uVar3;
  }
  if (uVar2 != 0) {
    uVar1 = wmemcmp((wchar_t *)(*(long *)this + param_1 * 4),param_3,uVar2);
    if (uVar1 != 0) {
      return (ulong)uVar1;
    }
  }
  uVar3 = uVar3 - param_4;
  uVar2 = 0x7fffffff;
  if (((long)uVar3 < 0x80000000) && (uVar2 = 0x80000000, -0x80000001 < (long)uVar3)) {
    uVar2 = uVar3 & 0xffffffff;
  }
  return uVar2;
}

