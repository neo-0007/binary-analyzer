
/* std::wstreambuf::sputbackc(wchar_t) */

ulong __thiscall std::wstreambuf::sputbackc(wstreambuf *this,wchar_t param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = *(ulong *)(this + 0x10);
  uVar2 = (ulong)(uint)param_1;
  if ((*(ulong *)(this + 8) < uVar1) && (*(wchar_t *)(uVar1 - 4) == param_1)) {
    *(ulong *)(this + 0x10) = uVar1 - 4;
  }
  else {
    uVar2 = 0xffffffff;
    if (*(code **)(*(long *)this + 0x58) != pbackfail) {
                    /* WARNING: Could not recover jumptable at 0x0069096e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (**(code **)(*(long *)this + 0x58))();
      return uVar1;
    }
  }
  return uVar2;
}

