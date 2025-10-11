
/* std::wstreambuf::stossc() */

void __thiscall std::wstreambuf::stossc(wstreambuf *this)

{
  code *UNRECOVERED_JUMPTABLE;
  int iVar1;
  
  if (*(ulong *)(this + 0x10) < *(ulong *)(this + 0x18)) {
    *(ulong *)(this + 0x10) = *(ulong *)(this + 0x10) + 4;
    return;
  }
  UNRECOVERED_JUMPTABLE = *(code **)(*(long *)this + 0x50);
  if (UNRECOVERED_JUMPTABLE == uflow) {
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)this + 0x48);
    if (UNRECOVERED_JUMPTABLE == underflow) {
      return;
    }
    iVar1 = (*UNRECOVERED_JUMPTABLE)();
    if (iVar1 != -1) {
      *(long *)(this + 0x10) = *(long *)(this + 0x10) + 4;
    }
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00690b60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}

