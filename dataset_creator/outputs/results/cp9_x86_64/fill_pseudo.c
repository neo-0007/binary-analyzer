
/* std::wios::fill(wchar_t) */

ulong __thiscall std::wios::fill(wios *this,wchar_t param_1)

{
  uint uVar1;
  long *plVar2;
  ulong uVar3;
  
  if (this[0xe4] != (wios)0x0) {
    uVar1 = *(uint *)(this + 0xe0);
    *(wchar_t *)(this + 0xe0) = param_1;
    return (ulong)uVar1;
  }
  plVar2 = *(long **)(this + 0xf0);
  if (plVar2 != (long *)0x0) {
    uVar3 = (**(code **)(*plVar2 + 0x50))(plVar2,0x20);
    *(wchar_t *)(this + 0xe0) = param_1;
    this[0xe4] = (wios)0x1;
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __throw_bad_cast();
}

