
/* std::wstreambuf::sputc(wchar_t) */

ulong __thiscall std::wstreambuf::sputc(wstreambuf *this,wchar_t param_1)

{
  wchar_t *pwVar1;
  ulong uVar2;
  
  pwVar1 = *(wchar_t **)(this + 0x28);
  uVar2 = (ulong)(uint)param_1;
  if (pwVar1 < *(wchar_t **)(this + 0x30)) {
    *pwVar1 = param_1;
    *(wchar_t **)(this + 0x28) = pwVar1 + 1;
  }
  else {
    uVar2 = 0xffffffff;
    if (*(code **)(*(long *)this + 0x68) != overflow) {
                    /* WARNING: Could not recover jumptable at 0x006909f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(*(long *)this + 0x68))();
      return uVar2;
    }
  }
  return uVar2;
}

