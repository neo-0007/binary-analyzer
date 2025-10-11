
/* std::moneypunct<wchar_t, true>::neg_format() const */

ulong __thiscall std::moneypunct<wchar_t,true>::neg_format(moneypunct<wchar_t,true> *this)

{
  ulong uVar1;
  
  if (*(code **)(*(long *)this + 0x50) == do_neg_format) {
    return (ulong)*(uint *)(*(long *)(this + 0x10) + 0x68);
  }
                    /* WARNING: Could not recover jumptable at 0x006962d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(long *)this + 0x50))();
  return uVar1;
}

