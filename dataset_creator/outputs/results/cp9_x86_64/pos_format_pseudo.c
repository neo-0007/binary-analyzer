
/* std::moneypunct<wchar_t, true>::pos_format() const */

ulong __thiscall std::moneypunct<wchar_t,true>::pos_format(moneypunct<wchar_t,true> *this)

{
  ulong uVar1;
  
  if (*(code **)(*(long *)this + 0x48) == do_pos_format) {
    return (ulong)*(uint *)(*(long *)(this + 0x10) + 100);
  }
                    /* WARNING: Could not recover jumptable at 0x006962a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(long *)this + 0x48))();
  return uVar1;
}

