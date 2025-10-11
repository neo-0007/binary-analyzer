
/* std::__cxx11::wstring::_S_compare(unsigned long, unsigned long) */

ulong std::__cxx11::wstring::_S_compare(ulong param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = param_1 - param_2;
  uVar1 = 0x7fffffff;
  if (((long)uVar2 < 0x80000000) && (uVar1 = 0x80000000, -0x80000001 < (long)uVar2)) {
    uVar1 = uVar2 & 0xffffffff;
  }
  return uVar1;
}

