
/* std::moneypunct<wchar_t, true>::frac_digits() const */

ulong __thiscall std::moneypunct<wchar_t,true>::frac_digits(moneypunct<wchar_t,true> *this)

{
  ulong uVar1;
  
  if (*(code **)(*(long *)this + 0x40) == do_frac_digits) {
    return (ulong)*(uint *)(*(long *)(this + 0x10) + 0x60);
  }
                    /* WARNING: Could not recover jumptable at 0x00696270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(long *)this + 0x40))();
  return uVar1;
}

