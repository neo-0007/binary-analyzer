
/* std::numpunct<wchar_t>::thousands_sep() const */

ulong __thiscall std::numpunct<wchar_t>::thousands_sep(numpunct<wchar_t> *this)

{
  ulong uVar1;
  
  if (*(code **)(*(long *)this + 0x18) == do_thousands_sep) {
    return (ulong)*(uint *)(*(long *)(this + 0x10) + 0x4c);
  }
                    /* WARNING: Could not recover jumptable at 0x006968c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(long *)this + 0x18))();
  return uVar1;
}

