
/* std::wstreambuf::snextc() */

ulong __thiscall std::wstreambuf::snextc(wstreambuf *this)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  ulong uVar4;
  
  piVar1 = *(int **)(this + 0x10);
  if (piVar1 < *(int **)(this + 0x18)) {
    iVar3 = *piVar1;
    *(int **)(this + 0x10) = piVar1 + 1;
    if (iVar3 != -1) {
      if (*(uint **)(this + 0x10) < *(uint **)(this + 0x18)) {
        return (ulong)**(uint **)(this + 0x10);
      }
      if (*(code **)(*(long *)this + 0x48) != underflow) {
                    /* WARNING: Could not recover jumptable at 0x006907e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar4 = (**(code **)(*(long *)this + 0x48))();
        return uVar4;
      }
    }
    return 0xffffffff;
  }
  pcVar2 = *(code **)(*(long *)this + 0x50);
  if (pcVar2 == uflow) {
    pcVar2 = *(code **)(*(long *)this + 0x48);
    if (pcVar2 == underflow) {
      return 0xffffffff;
    }
    iVar3 = (*pcVar2)();
    if (iVar3 == -1) {
      return 0xffffffff;
    }
    iVar3 = **(int **)(this + 0x10);
    *(int **)(this + 0x10) = *(int **)(this + 0x10) + 1;
  }
  else {
    iVar3 = (*pcVar2)();
  }
  if (iVar3 != -1) {
    if (*(uint **)(this + 0x10) < *(uint **)(this + 0x18)) {
      return (ulong)**(uint **)(this + 0x10);
    }
    if (*(code **)(*(long *)this + 0x48) != underflow) {
                    /* WARNING: Could not recover jumptable at 0x00690845. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar4 = (**(code **)(*(long *)this + 0x48))();
      return uVar4;
    }
  }
  return 0xffffffff;
}

