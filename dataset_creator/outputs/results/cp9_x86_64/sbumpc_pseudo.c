
/* std::wstreambuf::sbumpc() */

ulong __thiscall std::wstreambuf::sbumpc(wstreambuf *this)

{
  uint *puVar1;
  code *UNRECOVERED_JUMPTABLE;
  int iVar2;
  ulong uVar3;
  uint uVar4;
  
  puVar1 = *(uint **)(this + 0x10);
  if (puVar1 < *(uint **)(this + 0x18)) {
    uVar4 = *puVar1;
    *(uint **)(this + 0x10) = puVar1 + 1;
  }
  else {
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)this + 0x50);
    if (UNRECOVERED_JUMPTABLE != uflow) {
                    /* WARNING: Could not recover jumptable at 0x00690898. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (*UNRECOVERED_JUMPTABLE)();
      return uVar3;
    }
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)this + 0x48);
    if (UNRECOVERED_JUMPTABLE != underflow) {
      iVar2 = (*UNRECOVERED_JUMPTABLE)();
      if (iVar2 == -1) {
        uVar4 = 0xffffffff;
      }
      else {
        uVar4 = **(uint **)(this + 0x10);
        *(uint **)(this + 0x10) = *(uint **)(this + 0x10) + 1;
      }
      return (ulong)uVar4;
    }
    uVar4 = 0xffffffff;
  }
  return (ulong)uVar4;
}

