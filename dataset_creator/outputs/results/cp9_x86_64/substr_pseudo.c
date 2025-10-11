
/* std::__cxx11::wstring::substr(unsigned long, unsigned long) const */

ulong std::__cxx11::wstring::substr(ulong param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  ulong in_RCX;
  ulong in_RDX;
  ulong uVar3;
  
  uVar2 = *(ulong *)(param_2 + 8);
  if (in_RDX <= uVar2) {
    *(ulong *)param_1 = param_1 + 0x10;
    uVar3 = uVar2 - in_RDX;
    if (in_RCX < uVar2 - in_RDX) {
      uVar3 = in_RCX;
    }
    lVar1 = *(long *)param_2 + in_RDX * 4;
    _M_construct<wchar_t_const*>(param_1,lVar1,lVar1 + uVar3 * 4);
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __throw_out_of_range_fmt
            ("%s: __pos (which is %zu) > this->size() (which is %zu)","basic_string::substr",in_RDX,
             uVar2);
}

