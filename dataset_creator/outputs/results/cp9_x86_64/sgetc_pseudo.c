
/* std::wstreambuf::sgetc() */

ulong __thiscall std::wstreambuf::sgetc(wstreambuf *this)

{
  ulong uVar1;
  
  if (*(uint **)(this + 0x10) < *(uint **)(this + 0x18)) {
    return (ulong)**(uint **)(this + 0x10);
  }
  if (*(code **)(*(long *)this + 0x48) == underflow) {
    return 0xffffffff;
  }
                    /* WARNING: Could not recover jumptable at 0x00690910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(long *)this + 0x48))();
  return uVar1;
}

