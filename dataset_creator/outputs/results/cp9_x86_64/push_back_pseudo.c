
/* std::__cxx11::wstring::push_back(wchar_t) */

void __thiscall std::__cxx11::wstring::push_back(wstring *this,wchar_t param_1)

{
  ulong uVar1;
  wstring *pwVar2;
  ulong uVar3;
  
  uVar1 = *(ulong *)(this + 8);
  pwVar2 = *(wstring **)this;
  if (pwVar2 == this + 0x10) {
    uVar3 = 3;
  }
  else {
    uVar3 = *(ulong *)(this + 0x10);
  }
  if (uVar3 < uVar1 + 1) {
    _M_mutate(this,uVar1,0,(wchar_t *)0x0,1);
    pwVar2 = *(wstring **)this;
  }
  *(wchar_t *)(pwVar2 + uVar1 * 4) = param_1;
  *(ulong *)(this + 8) = uVar1 + 1;
  *(undefined4 *)(pwVar2 + uVar1 * 4 + 4) = 0;
  return;
}

