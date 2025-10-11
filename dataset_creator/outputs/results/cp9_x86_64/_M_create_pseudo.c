
/* std::__cxx11::wstring::_M_create(unsigned long&, unsigned long) */

void __thiscall std::__cxx11::wstring::_M_create(wstring *this,ulong *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_1;
  if (0xfffffffffffffff < uVar2) {
                    /* WARNING: Subroutine does not return */
    __throw_length_error("basic_string::_M_create");
  }
  if ((param_2 < uVar2) && (uVar1 = param_2 * 2, uVar2 < uVar1)) {
    if (0xfffffffffffffff < uVar1) {
      *param_1 = 0xfffffffffffffff;
      operator_new(0x4000000000000000);
      return;
    }
    *param_1 = uVar1;
    uVar2 = uVar1;
  }
  operator_new(uVar2 * 4 + 4);
  return;
}

