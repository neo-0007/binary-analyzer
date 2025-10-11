
/* std::numpunct<wchar_t>::decimal_point() const */

ulong __thiscall std::numpunct<wchar_t>::decimal_point(numpunct<wchar_t> *this)

{
  ulong uVar1;
  
  if (*(code **)(*(long *)this + 0x10) == do_decimal_point) {
    return (ulong)*(uint *)(*(long *)(this + 0x10) + 0x48);
  }
                    /* WARNING: Could not recover jumptable at 0x00696890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(long *)this + 0x10))();
  return uVar1;
}

