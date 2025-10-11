
/* std::wstreambuf::uflow() */

undefined4 __thiscall std::wstreambuf::uflow(wstreambuf *this)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(code **)(*(long *)this + 0x48) == underflow) {
    return 0xffffffff;
  }
  iVar2 = (**(code **)(*(long *)this + 0x48))();
  if (iVar2 != -1) {
    uVar1 = **(undefined4 **)(this + 0x10);
    *(undefined4 **)(this + 0x10) = *(undefined4 **)(this + 0x10) + 1;
    return uVar1;
  }
  return 0xffffffff;
}

