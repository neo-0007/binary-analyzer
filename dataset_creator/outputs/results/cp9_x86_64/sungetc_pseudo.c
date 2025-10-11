
/* std::wstreambuf::sungetc() */

ulong __thiscall std::wstreambuf::sungetc(wstreambuf *this)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(this + 0x10);
  if (*(ulong *)(this + 8) < uVar2) {
    uVar1 = *(uint *)(uVar2 - 4);
    *(ulong *)(this + 0x10) = uVar2 - 4;
    return (ulong)uVar1;
  }
  if (*(code **)(*(long *)this + 0x58) == pbackfail) {
    return 0xffffffff;
  }
                    /* WARNING: Could not recover jumptable at 0x006909b5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(*(long *)this + 0x58))(this,0xffffffff);
  return uVar2;
}

